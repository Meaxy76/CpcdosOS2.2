#include <iostream>
#include "../include/ccp_func.h"

#include "../include/cpcdos.h"

namespace Cpc_txt_exec {
    std::string CCP_Parse_Text(std::string text){
        std::string buf;
        std::string varname;
        std::string text2;
        std::string varcontent;
        std::string gettext;
        std::string gettext2;

        int txtlen;
        int varstartpos;
        int varposend;

        int sum;
        // Basic txt/
        // New to implement txt/ blabla %MyVar% okok
        // Or txt/ %MyVar% noice

        if(instr(ucase(text), "%") > 0){
            txtlen = len(text);
            varstartpos = find(text, "%");
            buf = ltrim(text, 0, varstartpos + 1);
            varposend = find(buf, "%");
            //std::cout << "buf var is : " << buf << std::endl;
            //std::cout << "Position of % is : " << varstartpos << std::endl;
            gettext = rtrim(text, varstartpos);
            if(varstartpos > 0){ // We know the var is not at the start so there is some text before
                
                sum = txtlen - varposend;
                if(sum > 0){
                    
                    varname = rtrim(buf, "%");
                    varcontent = CPCVAR::CCP_Read_Var(varname);
                    gettext2 = ltrim(buf, 0, find(buf, "%") + 1);
                    return gettext + varcontent + gettext2;
                } else {
                        
                    varname = rtrim(buf, "%");
                    varcontent = CPCVAR::CCP_Read_Var(varname);

                    return gettext + varcontent;
                }

            } else {
                sum = txtlen - varposend;
                if(sum > 0){
                    
                    varname = rtrim(buf, "%");
                    varcontent = CPCVAR::CCP_Read_Var(varname);
                    gettext2 = ltrim(buf, 0, find(buf, "%") + 1);
                    return varcontent + gettext2;
                } else{
                    varname = rtrim(buf, "%");
                    varcontent = CPCVAR::CCP_Read_Var(varname);
                    return varcontent;
                }
            }
        } else {
            
            gettext = text;
            return gettext;
        }
    }
}