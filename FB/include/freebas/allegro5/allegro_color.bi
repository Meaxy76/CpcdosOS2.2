#pragma once
#inclib "allegro_color"

#include once "allegro5/allegro.bi"

extern "C"

#define __al_included_allegro5_allegro_color_h

declare function al_get_allegro_color_version() as ulong
declare sub al_color_hsv_to_rgb(byval hue as single, byval saturation as single, byval value as single, byval red as single ptr, byval green as single ptr, byval blue as single ptr)
declare sub al_color_rgb_to_hsl(byval red as single, byval green as single, byval blue as single, byval hue as single ptr, byval saturation as single ptr, byval lightness as single ptr)
declare sub al_color_rgb_to_hsv(byval red as single, byval green as single, byval blue as single, byval hue as single ptr, byval saturation as single ptr, byval value as single ptr)
declare sub al_color_hsl_to_rgb(byval hue as single, byval saturation as single, byval lightness as single, byval red as single ptr, byval green as single ptr, byval blue as single ptr)
declare function al_color_name_to_rgb(byval name_ as const zstring ptr, byval r as single ptr, byval g as single ptr, byval b as single ptr) as byte
declare function al_color_rgb_to_name(byval r as single, byval g as single, byval b as single) as const zstring ptr
declare sub al_color_cmyk_to_rgb(byval cyan as single, byval magenta as single, byval yellow as single, byval key as single, byval red as single ptr, byval green as single ptr, byval blue as single ptr)
declare sub al_color_rgb_to_cmyk(byval red as single, byval green as single, byval blue as single, byval cyan as single ptr, byval magenta as single ptr, byval yellow as single ptr, byval key as single ptr)
declare sub al_color_yuv_to_rgb(byval y as single, byval u as single, byval v as single, byval red as single ptr, byval green as single ptr, byval blue as single ptr)
declare sub al_color_rgb_to_yuv(byval red as single, byval green as single, byval blue as single, byval y as single ptr, byval u as single ptr, byval v as single ptr)
declare sub al_color_rgb_to_html(byval red as single, byval green as single, byval blue as single, byval string_ as zstring ptr)
declare sub al_color_html_to_rgb(byval string_ as const zstring ptr, byval red as single ptr, byval green as single ptr, byval blue as single ptr)
declare function al_color_yuv(byval y as single, byval u as single, byval v as single) as ALLEGRO_COLOR
declare function al_color_cmyk(byval c as single, byval m as single, byval y as single, byval k as single) as ALLEGRO_COLOR
declare function al_color_hsl(byval h as single, byval s as single, byval l as single) as ALLEGRO_COLOR
declare function al_color_hsv(byval h as single, byval s as single, byval v as single) as ALLEGRO_COLOR
declare function al_color_name(byval name_ as const zstring ptr) as ALLEGRO_COLOR
declare function al_color_html(byval string_ as const zstring ptr) as ALLEGRO_COLOR

end extern
