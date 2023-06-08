	.arch armv7-a
	.eabi_attribute 28, 1
	.eabi_attribute 19, 1
	.eabi_attribute 20, 1
	.eabi_attribute 21, 1
	.eabi_attribute 23, 3
	.eabi_attribute 24, 1
	.eabi_attribute 25, 1
	.eabi_attribute 26, 2
	.eabi_attribute 30, 2
	.eabi_attribute 34, 1
	.eabi_attribute 18, 4
	.file	"CPCDOS_INIT.c"
	.text
.Ltext0:
	.cfi_sections	.debug_frame
	.section	.rodata.str1.4,"aMS",%progbits,1
	.align	2
.LC0:
	.ascii	"/DEFAULT\000"
	.section	.text.startup,"ax",%progbits
	.align	2
	.global	main
	.arch armv7-a
	.syntax unified
	.arm
	.fpu vfp
	.type	main, %function
main:
.LVL0:
.LFB0:
	.file 1 "OS2.2/CPCDOS_INIT.BAS"
	.loc 1 1 1 view -0
	.cfi_startproc
	@ args = 0, pretend = 0, frame = 24
	@ frame_needed = 0, uses_anonymous_args = 0
	.loc 1 1 2 view .LVU1
	.loc 1 1 2 view .LVU2
	.loc 1 1 2 view .LVU3
	.loc 1 1 1 is_stmt 0 view .LVU4
	push	{r4, lr}
	.cfi_def_cfa_offset 8
	.cfi_offset 4, -8
	.cfi_offset 14, -4
.LBB2:
	.loc 1 14 20 view .LVU5
	mov	r4, #0
.LBE2:
	.loc 1 1 2 view .LVU6
	mov	r2, r4
	.loc 1 1 1 view .LVU7
	sub	sp, sp, #32
	.cfi_def_cfa_offset 40
	.loc 1 1 2 view .LVU8
	bl	fb_Init
.LVL1:
.LDL1:
	.loc 1 1 10 is_stmt 1 view .LVU9
	.loc 1 12 2 view .LVU10
	.loc 1 12 2 view .LVU11
	.loc 1 12 2 is_stmt 0 view .LVU12
	b	.L2
.LVL2:
.L11:
.LBB10:
.LBB3:
	.loc 1 20 17 discriminator 1 view .LVU13
	bl	fb_StrLen
.LVL3:
	.loc 1 20 20 is_stmt 1 discriminator 1 view .LVU14
.LDL2:
.LDL3:
.LDL4:
	.loc 1 23 12 discriminator 1 view .LVU15
	.loc 1 23 12 discriminator 1 view .LVU16
.LBE3:
	.loc 1 24 11 discriminator 1 view .LVU17
	.loc 1 29 3 discriminator 1 view .LVU18
.LBB5:
	.loc 1 20 17 is_stmt 0 discriminator 1 view .LVU19
	mov	r3, r0
.LVL4:
	.loc 1 20 4 is_stmt 1 discriminator 1 view .LVU20
	.loc 1 20 6 is_stmt 0 discriminator 1 view .LVU21
	cmp	r3, #0
.LBE5:
	.loc 1 29 3 discriminator 1 view .LVU22
	add	r0, sp, #8
.LBB6:
	.loc 1 20 6 discriminator 1 view .LVU23
	bgt	.L10
.LBE6:
	.loc 1 29 3 discriminator 1 view .LVU24
	bl	fb_StrDelete
.LVL5:
.LDL5:
	.loc 1 29 3 discriminator 1 view .LVU25
.LBE10:
	.loc 1 29 10 is_stmt 1 discriminator 1 view .LVU26
	.loc 1 29 2 discriminator 1 view .LVU27
.L2:
	.loc 1 13 10 view .LVU28
.LBB11:
	.loc 1 14 3 view .LVU29
	.loc 1 14 3 view .LVU30
	.loc 1 14 20 is_stmt 0 view .LVU31
	mov	r0, #1
	bl	fb_Command
.LVL6:
	.loc 1 14 20 view .LVU32
	mvn	r3, #0
	.loc 1 14 20 view .LVU33
	mov	r2, r0
.LVL7:
	.loc 1 14 3 is_stmt 1 view .LVU34
	.loc 1 14 20 is_stmt 0 view .LVU35
	mov	r1, r3
	add	r0, sp, #8
	str	r4, [sp]
	bl	fb_StrInit
.LVL8:
	.loc 1 15 3 is_stmt 1 view .LVU36
	.loc 1 15 16 is_stmt 0 view .LVU37
	mvn	r1, #0
	add	r0, sp, #8
	bl	fb_StrLen
.LVL9:
	.loc 1 15 19 is_stmt 1 view .LVU38
.LDL6:
	.loc 1 19 11 view .LVU39
.LBB7:
	.loc 1 20 4 view .LVU40
.LBE7:
	.loc 1 15 16 is_stmt 0 view .LVU41
	mov	r3, r0
.LVL10:
	.loc 1 15 3 is_stmt 1 view .LVU42
	.loc 1 15 5 is_stmt 0 view .LVU43
	cmp	r3, #0
.LBB8:
	.loc 1 20 17 view .LVU44
	add	r0, sp, #8
	mvn	r1, #0
.LBE8:
	.loc 1 15 5 view .LVU45
	bne	.L11
	.loc 1 16 4 is_stmt 1 view .LVU46
	movw	r0, #:lower16:.LC0
.LVL11:
	.loc 1 16 4 is_stmt 0 view .LVU47
	movt	r0, #:upper16:.LC0
	bl	_ZN8cpc_init13cpcdos_loaderEPc
.LVL12:
	.loc 1 17 4 is_stmt 1 view .LVU48
	add	r0, sp, #8
	bl	fb_StrDelete
.LVL13:
	.loc 1 17 4 view .LVU49
.L6:
.LDL7:
.LDL8:
.LBE11:
	.loc 1 29 10 discriminator 1 view .LVU50
	.loc 1 29 10 discriminator 1 view .LVU51
	.loc 1 29 2 discriminator 1 view .LVU52
	mov	r0, #0
	bl	fb_End
.LVL14:
	.loc 1 29 2 discriminator 1 view .LVU53
	.loc 1 29 1 is_stmt 0 discriminator 1 view .LVU54
	mov	r0, #0
	add	sp, sp, #32
	.cfi_remember_state
	.cfi_def_cfa_offset 8
	@ sp needed
	pop	{r4, pc}
.LVL15:
.L10:
	.cfi_restore_state
.LBB12:
.LBB9:
.LBB4:
	.loc 1 20 5 is_stmt 1 discriminator 2 view .LVU55
	.loc 1 21 5 discriminator 2 view .LVU56
	.loc 1 21 23 is_stmt 0 discriminator 2 view .LVU57
	mov	r0, #1
.LVL16:
	.loc 1 21 5 discriminator 2 view .LVU58
	str	r4, [sp, #20]
	str	r4, [sp, #24]
	str	r4, [sp, #28]
	.loc 1 21 5 is_stmt 1 discriminator 2 view .LVU59
	.loc 1 21 23 is_stmt 0 discriminator 2 view .LVU60
	bl	fb_Command
.LVL17:
	.loc 1 21 23 discriminator 2 view .LVU61
	mvn	r3, #0
	.loc 1 21 23 discriminator 2 view .LVU62
	mov	r2, r0
.LVL18:
	.loc 1 21 5 is_stmt 1 discriminator 2 view .LVU63
	.loc 1 21 23 is_stmt 0 discriminator 2 view .LVU64
	mov	r1, r3
	add	r0, sp, #20
	str	r4, [sp]
	bl	fb_StrAssign
.LVL19:
	.loc 1 21 5 is_stmt 1 discriminator 2 view .LVU65
	ldr	r0, [sp, #20]
	bl	_ZN8cpc_init13cpcdos_loaderEPc
.LVL20:
	.loc 1 21 5 discriminator 2 view .LVU66
	add	r0, sp, #20
	bl	fb_StrDelete
.LVL21:
	.loc 1 22 5 discriminator 2 view .LVU67
	add	r0, sp, #8
	bl	fb_StrDelete
.LVL22:
	.loc 1 22 5 discriminator 2 view .LVU68
	b	.L6
.LBE4:
.LBE9:
.LBE12:
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.text
.Letext0:
	.file 2 "OS2.2/CPCDOS_INIT.c"
	.section	.debug_info,"",%progbits
.Ldebug_info0:
	.4byte	0x3ca
	.2byte	0x4
	.4byte	.Ldebug_abbrev0
	.byte	0x4
	.uleb128 0x1
	.4byte	.LASF41
	.byte	0xc
	.4byte	.LASF42
	.4byte	.LASF43
	.4byte	.Ldebug_ranges0+0x60
	.4byte	0
	.4byte	.Ldebug_line0
	.uleb128 0x2
	.byte	0x1
	.byte	0x6
	.4byte	.LASF0
	.uleb128 0x3
	.4byte	.LASF4
	.byte	0x2
	.byte	0x2
	.byte	0x1c
	.4byte	0x38
	.uleb128 0x2
	.byte	0x1
	.byte	0x8
	.4byte	.LASF1
	.uleb128 0x2
	.byte	0x2
	.byte	0x5
	.4byte	.LASF2
	.uleb128 0x2
	.byte	0x2
	.byte	0x7
	.4byte	.LASF3
	.uleb128 0x3
	.4byte	.LASF5
	.byte	0x2
	.byte	0x5
	.byte	0x1d
	.4byte	0x59
	.uleb128 0x4
	.byte	0x4
	.byte	0x5
	.ascii	"int\000"
	.uleb128 0x2
	.byte	0x4
	.byte	0x7
	.4byte	.LASF6
	.uleb128 0x2
	.byte	0x8
	.byte	0x5
	.4byte	.LASF7
	.uleb128 0x2
	.byte	0x8
	.byte	0x7
	.4byte	.LASF8
	.uleb128 0x5
	.byte	0xc
	.byte	0x2
	.byte	0x9
	.byte	0x9
	.4byte	0xa6
	.uleb128 0x6
	.4byte	.LASF9
	.byte	0x2
	.byte	0x9
	.byte	0x18
	.4byte	0xa6
	.byte	0
	.uleb128 0x7
	.ascii	"len\000"
	.byte	0x2
	.byte	0x9
	.byte	0x24
	.4byte	0x4d
	.byte	0x4
	.uleb128 0x6
	.4byte	.LASF10
	.byte	0x2
	.byte	0x9
	.byte	0x2f
	.4byte	0x4d
	.byte	0x8
	.byte	0
	.uleb128 0x8
	.byte	0x4
	.4byte	0xac
	.uleb128 0x2
	.byte	0x1
	.byte	0x8
	.4byte	.LASF11
	.uleb128 0x3
	.4byte	.LASF12
	.byte	0x2
	.byte	0x9
	.byte	0x37
	.4byte	0x75
	.uleb128 0x9
	.4byte	.LASF44
	.byte	0x1
	.byte	0x1
	.byte	0x7
	.4byte	0x4d
	.4byte	.LFB0
	.4byte	.LFE0-.LFB0
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x361
	.uleb128 0xa
	.4byte	.LASF13
	.byte	0x1
	.byte	0x1
	.byte	0x13
	.4byte	0x4d
	.4byte	.LLST0
	.4byte	.LVUS0
	.uleb128 0xa
	.4byte	.LASF14
	.byte	0x1
	.byte	0x1
	.byte	0x29
	.4byte	0x361
	.4byte	.LLST1
	.4byte	.LVUS1
	.uleb128 0xb
	.4byte	.LASF15
	.byte	0x1
	.byte	0x1
	.byte	0x8
	.4byte	0x4d
	.byte	0
	.uleb128 0xc
	.4byte	.LASF16
	.byte	0x1
	.byte	0x1
	.byte	0x2
	.4byte	.LDL1
	.uleb128 0xd
	.ascii	"I$0\000"
	.byte	0x1
	.byte	0xc
	.byte	0x8
	.4byte	0x4d
	.byte	0x1
	.uleb128 0xc
	.4byte	.LASF17
	.byte	0x1
	.byte	0xd
	.byte	0x2
	.4byte	.L2
	.uleb128 0xc
	.4byte	.LASF18
	.byte	0x1
	.byte	0x13
	.byte	0x3
	.4byte	.LDL6
	.uleb128 0xc
	.4byte	.LASF19
	.byte	0x1
	.byte	0x1d
	.byte	0x2
	.4byte	.LDL7
	.uleb128 0xc
	.4byte	.LASF20
	.byte	0x1
	.byte	0x18
	.byte	0x3
	.4byte	.LDL4
	.uleb128 0xc
	.4byte	.LASF21
	.byte	0x1
	.byte	0x17
	.byte	0x4
	.4byte	.LDL2
	.uleb128 0xc
	.4byte	.LASF22
	.byte	0x1
	.byte	0x17
	.byte	0x4
	.4byte	.LDL3
	.uleb128 0xc
	.4byte	.LASF23
	.byte	0x1
	.byte	0x1d
	.byte	0x2
	.4byte	.LDL5
	.uleb128 0xc
	.4byte	.LASF24
	.byte	0x1
	.byte	0x1d
	.byte	0x2
	.4byte	.LDL8
	.uleb128 0xe
	.4byte	.Ldebug_ranges0+0
	.4byte	0x32e
	.uleb128 0xf
	.4byte	.LASF25
	.byte	0x1
	.byte	0xe
	.byte	0xc
	.4byte	0xb3
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x10
	.4byte	.LASF26
	.byte	0x1
	.byte	0xe
	.byte	0xd
	.4byte	0x367
	.4byte	.LLST2
	.4byte	.LVUS2
	.uleb128 0x11
	.4byte	.LASF31
	.byte	0x1
	.byte	0xe
	.byte	0xd
	.4byte	0x367
	.uleb128 0x10
	.4byte	.LASF27
	.byte	0x1
	.byte	0xf
	.byte	0x9
	.4byte	0x4d
	.4byte	.LLST3
	.4byte	.LVUS3
	.uleb128 0xe
	.4byte	.Ldebug_ranges0+0x28
	.4byte	0x29e
	.uleb128 0x10
	.4byte	.LASF28
	.byte	0x1
	.byte	0x14
	.byte	0xa
	.4byte	0x4d
	.4byte	.LLST4
	.4byte	.LVUS4
	.uleb128 0x12
	.4byte	.LBB4
	.4byte	.LBE4-.LBB4
	.4byte	0x294
	.uleb128 0xf
	.4byte	.LASF29
	.byte	0x1
	.byte	0x14
	.byte	0xe
	.4byte	0xb3
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x10
	.4byte	.LASF30
	.byte	0x1
	.byte	0x15
	.byte	0xf
	.4byte	0x367
	.4byte	.LLST5
	.4byte	.LVUS5
	.uleb128 0x11
	.4byte	.LASF32
	.byte	0x1
	.byte	0x15
	.byte	0xf
	.4byte	0x367
	.uleb128 0x13
	.4byte	.LVL17
	.4byte	0x36d
	.4byte	0x23f
	.uleb128 0x14
	.uleb128 0x1
	.byte	0x50
	.uleb128 0x1
	.byte	0x31
	.byte	0
	.uleb128 0x13
	.4byte	.LVL19
	.4byte	0x379
	.4byte	0x266
	.uleb128 0x14
	.uleb128 0x1
	.byte	0x50
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x14
	.uleb128 0x1
	.byte	0x51
	.uleb128 0x2
	.byte	0x9
	.byte	0xff
	.uleb128 0x14
	.uleb128 0x1
	.byte	0x53
	.uleb128 0x2
	.byte	0x9
	.byte	0xff
	.uleb128 0x14
	.uleb128 0x2
	.byte	0x7d
	.sleb128 0
	.uleb128 0x2
	.byte	0x74
	.sleb128 0
	.byte	0
	.uleb128 0x15
	.4byte	.LVL20
	.4byte	0x385
	.uleb128 0x13
	.4byte	.LVL21
	.4byte	0x391
	.4byte	0x283
	.uleb128 0x14
	.uleb128 0x1
	.byte	0x50
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.uleb128 0x16
	.4byte	.LVL22
	.4byte	0x391
	.uleb128 0x14
	.uleb128 0x1
	.byte	0x50
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.byte	0
	.uleb128 0x15
	.4byte	.LVL3
	.4byte	0x39d
	.byte	0
	.uleb128 0x13
	.4byte	.LVL5
	.4byte	0x391
	.4byte	0x2b2
	.uleb128 0x14
	.uleb128 0x1
	.byte	0x50
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0x13
	.4byte	.LVL6
	.4byte	0x36d
	.4byte	0x2c5
	.uleb128 0x14
	.uleb128 0x1
	.byte	0x50
	.uleb128 0x1
	.byte	0x31
	.byte	0
	.uleb128 0x13
	.4byte	.LVL8
	.4byte	0x3a9
	.4byte	0x2ec
	.uleb128 0x14
	.uleb128 0x1
	.byte	0x50
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x14
	.uleb128 0x1
	.byte	0x51
	.uleb128 0x2
	.byte	0x9
	.byte	0xff
	.uleb128 0x14
	.uleb128 0x1
	.byte	0x53
	.uleb128 0x2
	.byte	0x9
	.byte	0xff
	.uleb128 0x14
	.uleb128 0x2
	.byte	0x7d
	.sleb128 0
	.uleb128 0x2
	.byte	0x74
	.sleb128 0
	.byte	0
	.uleb128 0x13
	.4byte	.LVL9
	.4byte	0x39d
	.4byte	0x306
	.uleb128 0x14
	.uleb128 0x1
	.byte	0x50
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x14
	.uleb128 0x1
	.byte	0x51
	.uleb128 0x2
	.byte	0x9
	.byte	0xff
	.byte	0
	.uleb128 0x13
	.4byte	.LVL12
	.4byte	0x385
	.4byte	0x31d
	.uleb128 0x14
	.uleb128 0x1
	.byte	0x50
	.uleb128 0x5
	.byte	0x3
	.4byte	.LC0
	.byte	0
	.uleb128 0x16
	.4byte	.LVL13
	.4byte	0x391
	.uleb128 0x14
	.uleb128 0x1
	.byte	0x50
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.byte	0
	.uleb128 0x13
	.4byte	.LVL1
	.4byte	0x3b5
	.4byte	0x350
	.uleb128 0x14
	.uleb128 0x1
	.byte	0x50
	.uleb128 0x3
	.byte	0xf3
	.uleb128 0x1
	.byte	0x50
	.uleb128 0x14
	.uleb128 0x1
	.byte	0x51
	.uleb128 0x3
	.byte	0xf3
	.uleb128 0x1
	.byte	0x51
	.uleb128 0x14
	.uleb128 0x1
	.byte	0x52
	.uleb128 0x2
	.byte	0x74
	.sleb128 0
	.byte	0
	.uleb128 0x16
	.4byte	.LVL14
	.4byte	0x3c1
	.uleb128 0x14
	.uleb128 0x1
	.byte	0x50
	.uleb128 0x2
	.byte	0x74
	.sleb128 0
	.byte	0
	.byte	0
	.uleb128 0x8
	.byte	0x4
	.4byte	0xa6
	.uleb128 0x8
	.byte	0x4
	.4byte	0xb3
	.uleb128 0x17
	.4byte	.LASF33
	.4byte	.LASF33
	.byte	0x1
	.byte	0x1d
	.byte	0xb
	.uleb128 0x17
	.4byte	.LASF34
	.4byte	.LASF34
	.byte	0x1
	.byte	0x1d
	.byte	0xb
	.uleb128 0x17
	.4byte	.LASF35
	.4byte	.LASF35
	.byte	0x1
	.byte	0x1d
	.byte	0x7
	.uleb128 0x17
	.4byte	.LASF36
	.4byte	.LASF36
	.byte	0x1
	.byte	0x1d
	.byte	0x6
	.uleb128 0x17
	.4byte	.LASF37
	.4byte	.LASF37
	.byte	0x1
	.byte	0x1d
	.byte	0x7
	.uleb128 0x17
	.4byte	.LASF38
	.4byte	.LASF38
	.byte	0x1
	.byte	0x1d
	.byte	0xb
	.uleb128 0x17
	.4byte	.LASF39
	.4byte	.LASF39
	.byte	0x1
	.byte	0x1d
	.byte	0x6
	.uleb128 0x17
	.4byte	.LASF40
	.4byte	.LASF40
	.byte	0x1
	.byte	0x1d
	.byte	0x6
	.byte	0
	.section	.debug_abbrev,"",%progbits
.Ldebug_abbrev0:
	.uleb128 0x1
	.uleb128 0x11
	.byte	0x1
	.uleb128 0x25
	.uleb128 0xe
	.uleb128 0x13
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x1b
	.uleb128 0xe
	.uleb128 0x55
	.uleb128 0x17
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x10
	.uleb128 0x17
	.byte	0
	.byte	0
	.uleb128 0x2
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0xe
	.byte	0
	.byte	0
	.uleb128 0x3
	.uleb128 0x16
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x4
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0x8
	.byte	0
	.byte	0
	.uleb128 0x5
	.uleb128 0x13
	.byte	0x1
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x6
	.uleb128 0xd
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x38
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x7
	.uleb128 0xd
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x38
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x8
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x9
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x6
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x2117
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xa
	.uleb128 0x5
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x17
	.uleb128 0x2137
	.uleb128 0x17
	.byte	0
	.byte	0
	.uleb128 0xb
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x1c
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0xc
	.uleb128 0xa
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x11
	.uleb128 0x1
	.byte	0
	.byte	0
	.uleb128 0xd
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x1c
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0xe
	.uleb128 0xb
	.byte	0x1
	.uleb128 0x55
	.uleb128 0x17
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xf
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x10
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x17
	.uleb128 0x2137
	.uleb128 0x17
	.byte	0
	.byte	0
	.uleb128 0x11
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x12
	.uleb128 0xb
	.byte	0x1
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x6
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x13
	.uleb128 0x4109
	.byte	0x1
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x31
	.uleb128 0x13
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x14
	.uleb128 0x410a
	.byte	0
	.uleb128 0x2
	.uleb128 0x18
	.uleb128 0x2111
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x15
	.uleb128 0x4109
	.byte	0
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x31
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x16
	.uleb128 0x4109
	.byte	0x1
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x31
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x17
	.uleb128 0x2e
	.byte	0
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3c
	.uleb128 0x19
	.uleb128 0x6e
	.uleb128 0xe
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.byte	0
	.byte	0
	.byte	0
	.section	.debug_loc,"",%progbits
.Ldebug_loc0:
.LVUS0:
	.uleb128 0
	.uleb128 .LVU9
	.uleb128 .LVU9
	.uleb128 0
.LLST0:
	.4byte	.LVL0
	.4byte	.LVL1-1
	.2byte	0x1
	.byte	0x50
	.4byte	.LVL1-1
	.4byte	.LFE0
	.2byte	0x4
	.byte	0xf3
	.uleb128 0x1
	.byte	0x50
	.byte	0x9f
	.4byte	0
	.4byte	0
.LVUS1:
	.uleb128 0
	.uleb128 .LVU9
	.uleb128 .LVU9
	.uleb128 0
.LLST1:
	.4byte	.LVL0
	.4byte	.LVL1-1
	.2byte	0x1
	.byte	0x51
	.4byte	.LVL1-1
	.4byte	.LFE0
	.2byte	0x4
	.byte	0xf3
	.uleb128 0x1
	.byte	0x51
	.byte	0x9f
	.4byte	0
	.4byte	0
.LVUS2:
	.uleb128 .LVU34
	.uleb128 .LVU36
.LLST2:
	.4byte	.LVL7
	.4byte	.LVL8-1
	.2byte	0x1
	.byte	0x50
	.4byte	0
	.4byte	0
.LVUS3:
	.uleb128 .LVU13
	.uleb128 .LVU14
	.uleb128 .LVU42
	.uleb128 .LVU47
	.uleb128 .LVU47
	.uleb128 .LVU48
.LLST3:
	.4byte	.LVL2
	.4byte	.LVL3-1
	.2byte	0x1
	.byte	0x50
	.4byte	.LVL10
	.4byte	.LVL11
	.2byte	0x1
	.byte	0x50
	.4byte	.LVL11
	.4byte	.LVL12-1
	.2byte	0x1
	.byte	0x53
	.4byte	0
	.4byte	0
.LVUS4:
	.uleb128 .LVU20
	.uleb128 .LVU25
	.uleb128 .LVU55
	.uleb128 .LVU58
	.uleb128 .LVU58
	.uleb128 .LVU61
.LLST4:
	.4byte	.LVL4
	.4byte	.LVL5-1
	.2byte	0x1
	.byte	0x50
	.4byte	.LVL15
	.4byte	.LVL16
	.2byte	0x1
	.byte	0x50
	.4byte	.LVL16
	.4byte	.LVL17-1
	.2byte	0x1
	.byte	0x53
	.4byte	0
	.4byte	0
.LVUS5:
	.uleb128 .LVU63
	.uleb128 .LVU65
.LLST5:
	.4byte	.LVL18
	.4byte	.LVL19-1
	.2byte	0x1
	.byte	0x50
	.4byte	0
	.4byte	0
	.section	.debug_aranges,"",%progbits
	.4byte	0x1c
	.2byte	0x2
	.4byte	.Ldebug_info0
	.byte	0x4
	.byte	0
	.2byte	0
	.2byte	0
	.4byte	.LFB0
	.4byte	.LFE0-.LFB0
	.4byte	0
	.4byte	0
	.section	.debug_ranges,"",%progbits
.Ldebug_ranges0:
	.4byte	.LBB2
	.4byte	.LBE2
	.4byte	.LBB10
	.4byte	.LBE10
	.4byte	.LBB11
	.4byte	.LBE11
	.4byte	.LBB12
	.4byte	.LBE12
	.4byte	0
	.4byte	0
	.4byte	.LBB3
	.4byte	.LBE3
	.4byte	.LBB5
	.4byte	.LBE5
	.4byte	.LBB6
	.4byte	.LBE6
	.4byte	.LBB7
	.4byte	.LBE7
	.4byte	.LBB8
	.4byte	.LBE8
	.4byte	.LBB9
	.4byte	.LBE9
	.4byte	0
	.4byte	0
	.4byte	.LFB0
	.4byte	.LFE0
	.4byte	0
	.4byte	0
	.section	.debug_line,"",%progbits
.Ldebug_line0:
	.section	.debug_str,"MS",%progbits,1
.LASF35:
	.ascii	"_ZN8cpc_init13cpcdos_loaderEPc\000"
.LASF14:
	.ascii	"__FB_ARGV__$0\000"
.LASF15:
	.ascii	"fb$result$0\000"
.LASF38:
	.ascii	"fb_StrInit\000"
.LASF25:
	.ascii	"ARG$1\000"
.LASF3:
	.ascii	"short unsigned int\000"
.LASF40:
	.ascii	"fb_End\000"
.LASF29:
	.ascii	"TMP$3$3\000"
.LASF39:
	.ascii	"fb_Init\000"
.LASF9:
	.ascii	"data\000"
.LASF26:
	.ascii	"vr$1\000"
.LASF31:
	.ascii	"vr$3\000"
.LASF1:
	.ascii	"unsigned char\000"
.LASF27:
	.ascii	"vr$5\000"
.LASF12:
	.ascii	"FBSTRING\000"
.LASF28:
	.ascii	"vr$8\000"
.LASF4:
	.ascii	"uint8\000"
.LASF36:
	.ascii	"fb_StrDelete\000"
.LASF13:
	.ascii	"__FB_ARGC__$0\000"
.LASF37:
	.ascii	"fb_StrLen\000"
.LASF30:
	.ascii	"vr$10\000"
.LASF44:
	.ascii	"main\000"
.LASF32:
	.ascii	"vr$12\000"
.LASF42:
	.ascii	"OS2.2/CPCDOS_INIT.c\000"
.LASF16:
	.ascii	"label$0\000"
.LASF24:
	.ascii	"label$1\000"
.LASF17:
	.ascii	"label$2\000"
.LASF19:
	.ascii	"label$3\000"
.LASF6:
	.ascii	"unsigned int\000"
.LASF20:
	.ascii	"label$5\000"
.LASF18:
	.ascii	"label$6\000"
.LASF22:
	.ascii	"label$7\000"
.LASF8:
	.ascii	"long long unsigned int\000"
.LASF41:
	.ascii	"GNU C17 10.2.1 20210110 -mfloat-abi=hard -mfpu=vfp "
	.ascii	"-mtls-dialect=gnu -marm -march=armv7-a+fp -g -O3 -f"
	.ascii	"no-strict-aliasing -frounding-math -fno-math-errno "
	.ascii	"-fwrapv -fno-exceptions -fno-unwind-tables -fno-asy"
	.ascii	"nchronous-unwind-tables\000"
.LASF5:
	.ascii	"int32\000"
.LASF7:
	.ascii	"long long int\000"
.LASF11:
	.ascii	"char\000"
.LASF33:
	.ascii	"fb_Command\000"
.LASF2:
	.ascii	"short int\000"
.LASF23:
	.ascii	"label$4\000"
.LASF0:
	.ascii	"signed char\000"
.LASF43:
	.ascii	"/home/pi/cpcdos\000"
.LASF21:
	.ascii	"label$8\000"
.LASF10:
	.ascii	"size\000"
.LASF34:
	.ascii	"fb_StrAssign\000"
	.ident	"GCC: (Raspbian 10.2.1-6+rpi1) 10.2.1 20210110"
	.section	.note.GNU-stack,"",%progbits
