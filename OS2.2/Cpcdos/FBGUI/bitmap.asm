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
	.file	"bitmap.c"
	.text
.Ltext0:
	.cfi_sections	.debug_frame
	.section	.rodata.str1.4,"aMS",%progbits,1
	.align	2
.LC0:
	.ascii	"OS2.2/Cpcdos/FBGUI/bitmap.bas\000"
	.align	2
.LC1:
	.ascii	"IMG_CHANGE_SIZE_QUICK\000"
	.text
	.align	2
	.global	IMG_CHANGE_SIZE_QUICK
	.arch armv7-a
	.syntax unified
	.arm
	.fpu vfp
	.type	IMG_CHANGE_SIZE_QUICK, %function
IMG_CHANGE_SIZE_QUICK:
.LVL0:
.LFB0:
	.file 1 "OS2.2/Cpcdos/FBGUI/bitmap.bas"
	.loc 1 4 1 view -0
	.cfi_startproc
	@ args = 16, pretend = 0, frame = 64
	@ frame_needed = 0, uses_anonymous_args = 0
	.loc 1 4 1 is_stmt 0 view .LVU1
	push	{r4, r5, r6, r7, r8, r9, r10, fp, lr}
	.cfi_def_cfa_offset 36
	.cfi_offset 4, -36
	.cfi_offset 5, -32
	.cfi_offset 6, -28
	.cfi_offset 7, -24
	.cfi_offset 8, -20
	.cfi_offset 9, -16
	.cfi_offset 10, -12
	.cfi_offset 11, -8
	.cfi_offset 14, -4
	mov	r7, r0
	.loc 1 4 16 view .LVU2
	movw	r0, #:lower16:.LC0
.LVL1:
	.loc 1 4 16 view .LVU3
	movt	r0, #:upper16:.LC0
	.loc 1 4 1 view .LVU4
	vpush.64	{d8, d9, d10, d11, d12, d13, d14, d15}
	.cfi_def_cfa_offset 100
	.cfi_offset 80, -100
	.cfi_offset 81, -96
	.cfi_offset 82, -92
	.cfi_offset 83, -88
	.cfi_offset 84, -84
	.cfi_offset 85, -80
	.cfi_offset 86, -76
	.cfi_offset 87, -72
	.cfi_offset 88, -68
	.cfi_offset 89, -64
	.cfi_offset 90, -60
	.cfi_offset 91, -56
	.cfi_offset 92, -52
	.cfi_offset 93, -48
	.cfi_offset 94, -44
	.cfi_offset 95, -40
	sub	sp, sp, #100
	.cfi_def_cfa_offset 200
	.loc 1 4 2 is_stmt 1 view .LVU5
	.loc 1 4 2 view .LVU6
	.loc 1 4 2 view .LVU7
	.loc 1 4 2 view .LVU8
.LVL2:
	.loc 1 4 2 view .LVU9
	.loc 1 4 1 is_stmt 0 view .LVU10
	mov	r4, r1
	.loc 1 4 16 view .LVU11
	bl	fb_ErrorSetModName
.LVL3:
	.loc 1 4 16 view .LVU12
	mov	r5, r0
	.loc 1 4 16 view .LVU13
	movw	r0, #:lower16:.LC1
	movt	r0, #:upper16:.LC1
.LVL4:
	.loc 1 4 2 is_stmt 1 view .LVU14
	.loc 1 4 2 view .LVU15
	.loc 1 4 16 is_stmt 0 view .LVU16
	bl	fb_ErrorSetFuncName
.LVL5:
	.loc 1 30 4 view .LVU17
	ldr	r3, [sp, #208]
	ldr	r2, [sp, #200]
	.loc 1 4 16 view .LVU18
	mov	r6, r0
.LVL6:
	.loc 1 4 2 is_stmt 1 view .LVU19
.LDL1:
	.loc 1 4 10 view .LVU20
	.loc 1 16 2 view .LVU21
	.loc 1 16 2 view .LVU22
	.loc 1 17 2 view .LVU23
	.loc 1 17 2 view .LVU24
	.loc 1 19 2 view .LVU25
	.loc 1 19 2 view .LVU26
	.loc 1 20 2 view .LVU27
	.loc 1 20 2 view .LVU28
	.loc 1 21 2 view .LVU29
	.loc 1 21 2 view .LVU30
	.loc 1 22 2 view .LVU31
	.loc 1 22 2 view .LVU32
	.loc 1 23 2 view .LVU33
	.loc 1 23 2 view .LVU34
	.loc 1 24 2 view .LVU35
	.loc 1 24 2 view .LVU36
	.loc 1 25 2 view .LVU37
	.loc 1 25 2 view .LVU38
	.loc 1 26 2 view .LVU39
	.loc 1 26 2 view .LVU40
	.loc 1 30 2 view .LVU41
	.loc 1 30 4 is_stmt 0 view .LVU42
	cmp	r3, r2
	blt	.L2
	.loc 1 30 34 is_stmt 1 discriminator 1 view .LVU43
.LDL2:
	.loc 1 33 10 discriminator 1 view .LVU44
	.loc 1 33 2 discriminator 1 view .LVU45
	.loc 1 33 4 is_stmt 0 discriminator 1 view .LVU46
	bne	.L69
.LVL7:
.L3:
.LDL3:
.LDL4:
.LDL5:
.LDL6:
.LDL7:
.LDL8:
.LDL9:
.LBB2:
	.loc 1 91 14 is_stmt 1 view .LVU47
.LBE2:
	.loc 1 92 12 view .LVU48
	.loc 1 92 12 view .LVU49
	.loc 1 93 11 view .LVU50
	.loc 1 93 11 view .LVU51
	.loc 1 94 2 view .LVU52
	.loc 1 94 16 is_stmt 0 view .LVU53
	ldr	r4, [r4]
.LVL8:
.LDL10:
	.loc 1 97 10 is_stmt 1 view .LVU54
	.loc 1 97 2 view .LVU55
	mov	r0, r6
	bl	fb_ErrorSetFuncName
.LVL9:
	.loc 1 97 2 view .LVU56
	mov	r0, r5
	bl	fb_ErrorSetModName
.LVL10:
	.loc 1 97 2 view .LVU57
	.loc 1 97 1 is_stmt 0 view .LVU58
	mov	r0, r4
	add	sp, sp, #100
	.cfi_remember_state
	.cfi_def_cfa_offset 100
	@ sp needed
	vldm	sp!, {d8-d15}
	.cfi_restore 94
	.cfi_restore 95
	.cfi_restore 92
	.cfi_restore 93
	.cfi_restore 90
	.cfi_restore 91
	.cfi_restore 88
	.cfi_restore 89
	.cfi_restore 86
	.cfi_restore 87
	.cfi_restore 84
	.cfi_restore 85
	.cfi_restore 82
	.cfi_restore 83
	.cfi_restore 80
	.cfi_restore 81
	.cfi_def_cfa_offset 36
	pop	{r4, r5, r6, r7, r8, r9, r10, fp, pc}
.LVL11:
.L2:
	.cfi_restore_state
	.loc 1 97 1 view .LVU59
	vmov	s15, r2	@ int
.LVL12:
	.loc 1 39 10 is_stmt 1 view .LVU60
	.loc 1 40 2 view .LVU61
	.loc 1 40 4 is_stmt 0 view .LVU62
	ldr	r2, [sp, #204]
	.loc 1 52 21 view .LVU63
	vcvt.f64.s32	d8, s15
	.loc 1 52 42 view .LVU64
	vldr.32	s15, [sp, #208]	@ int
	vcvt.f64.s32	d9, s15
	.loc 1 51 21 view .LVU65
	vldr.32	s15, [sp, #204]	@ int
	vcvt.f64.s32	d10, s15
	.loc 1 51 42 view .LVU66
	vldr.32	s15, [sp, #212]	@ int
	.loc 1 40 4 view .LVU67
	vmov	r3, s15	@ int
	.loc 1 51 42 view .LVU68
	vcvt.f64.s32	d15, s15
	.loc 1 52 40 view .LVU69
	vdiv.f64	d7, d8, d9
	.loc 1 40 4 view .LVU70
	cmp	r3, r2
	.loc 1 52 13 view .LVU71
	vcvt.f32.f64	s23, d7
	.loc 1 40 4 view .LVU72
	blt	.L46
	.loc 1 40 34 is_stmt 1 view .LVU73
	.loc 1 43 10 view .LVU74
	.loc 1 43 2 view .LVU75
	.loc 1 43 4 is_stmt 0 view .LVU76
	movne	r9, #0
.LBB9:
	.loc 1 67 16 view .LVU77
	movne	r8, #1
.LBE9:
	.loc 1 43 4 view .LVU78
	beq	.L3
.LVL13:
.L27:
.LBB16:
	.loc 1 73 14 is_stmt 1 discriminator 1 view .LVU79
	.loc 1 73 5 discriminator 1 view .LVU80
	.loc 1 73 7 is_stmt 0 discriminator 1 view .LVU81
	ldr	r3, [sp, #212]
	cmp	r8, r3
	bgt	.L3
	.loc 1 73 34 is_stmt 1 discriminator 2 view .LVU82
.LDL11:
	.loc 1 67 14 discriminator 2 view .LVU83
	.loc 1 68 6 discriminator 2 view .LVU84
.LVL14:
.LBB10:
	.loc 1 69 7 discriminator 2 view .LVU85
	.loc 1 69 7 discriminator 2 view .LVU86
	.loc 1 69 7 discriminator 2 view .LVU87
	.loc 1 69 7 discriminator 2 view .LVU88
	.loc 1 69 7 discriminator 2 view .LVU89
	.loc 1 69 18 is_stmt 0 discriminator 2 view .LVU90
	vmov.f32	s0, s23
.LBE10:
	.loc 1 68 18 discriminator 2 view .LVU91
	mov	fp, #0
.LBB13:
	.loc 1 69 18 discriminator 2 view .LVU92
	bl	nearbyintf
.LVL15:
	.loc 1 69 16 discriminator 2 view .LVU93
	vcvt.s32.f32	s29, s0
.LVL16:
	.loc 1 69 7 is_stmt 1 discriminator 2 view .LVU94
	.loc 1 69 7 discriminator 2 view .LVU95
	.loc 1 69 7 is_stmt 0 discriminator 2 view .LVU96
	ldr	r3, [sp, #200]
	str	r3, [sp, #52]
	.loc 1 69 18 discriminator 2 view .LVU97
	mov	r3, #1
	str	r3, [sp, #32]
	.loc 1 69 29 discriminator 2 view .LVU98
	vmov	r3, s29	@ int
	mvn	r3, r3
	.loc 1 69 16 discriminator 2 view .LVU99
	asr	r3, r3, #31
	str	r3, [sp, #56]
.LVL17:
	.loc 1 69 7 is_stmt 1 discriminator 2 view .LVU100
.L23:
	.loc 1 72 16 discriminator 1 view .LVU101
	.loc 1 72 7 discriminator 1 view .LVU102
	.loc 1 72 9 is_stmt 0 discriminator 1 view .LVU103
	ldr	r3, [sp, #56]
	.loc 1 72 9 discriminator 1 view .LVU104
	ldr	r2, [sp, #52]
	.loc 1 72 9 discriminator 1 view .LVU105
	cmp	r3, #0
	.loc 1 72 9 discriminator 1 view .LVU106
	ldr	r3, [sp, #32]
	.loc 1 72 9 discriminator 1 view .LVU107
	bne	.L70
	.loc 1 72 7 is_stmt 1 discriminator 3 view .LVU108
	.loc 1 72 9 is_stmt 0 discriminator 3 view .LVU109
	cmp	r3, r2
	blt	.L26
.L19:
	.loc 1 69 16 is_stmt 1 view .LVU110
.LBB11:
	.loc 1 70 8 view .LVU111
	.loc 1 70 34 is_stmt 0 view .LVU112
	ldr	r3, [sp, #64]
	add	fp, fp, #1
.LVL18:
	.loc 1 70 34 view .LVU113
	str	r3, [sp, #204]
	ldr	r3, [sp, #212]
	str	r3, [sp, #80]
.LVL19:
.L20:
	.loc 1 71 17 is_stmt 1 view .LVU114
	.loc 1 71 8 view .LVU115
	.loc 1 71 118 is_stmt 0 view .LVU116
	vdiv.f64	d7, d15, d10
	vmov	s13, r8	@ int
	vcvt.f64.s32	d6, s13
	vdiv.f64	d13, d6, d7
	vmov.f64	d0, d13
	bl	nearbyint
.LVL20:
	vmov.f64	d12, d0
	.loc 1 71 209 view .LVU117
	vldr.64	d0, .L75
	vadd.f64	d0, d13, d0
	bl	nearbyint
.LVL21:
	vmov.f64	d7, d0
	.loc 1 71 22 view .LVU118
	ldr	ip, [sp, #32]
	mov	r3, #0
	vmov	s13, r8	@ int
	str	r3, [sp, #28]
	str	r3, [sp, #24]
	mov	r2, #1
	vcvt.s32.f64	s14, d7
	vmov	s15, fp	@ int
	str	r3, [sp, #8]
	vcvt.f32.s32	s1, s13
	vcvt.f32.s32	s0, s15
	vcvt.s32.f64	s15, d12
	vstr.32	s14, [sp, #4]	@ int
	ldr	r1, [r7]
	ldr	r0, [r4]
	vmov	r3, s15	@ int
	str	r2, [sp, #12]
	add	r2, ip, r2
	str	r2, [sp]
	mov	r2, ip
	mvn	ip, #0
	str	ip, [sp, #20]
	movw	ip, #:lower16:fb_hPutPSet
	movt	ip, #:upper16:fb_hPutPSet
	str	ip, [sp, #16]
	bl	fb_GfxPut
.LVL22:
	.loc 1 71 8 is_stmt 1 view .LVU119
	.loc 1 71 10 is_stmt 0 view .LVU120
	cmp	r0, #0
	beq	.L22
	.loc 1 71 8 is_stmt 1 discriminator 2 view .LVU121
	.loc 1 71 22 is_stmt 0 discriminator 2 view .LVU122
	ldr	r3, .L75+8
	movw	r1, #:lower16:.LC0
	movt	r1, #:upper16:.LC0
	ldr	r2, .L75+12
	mov	r0, #71
.LVL23:
	.loc 1 71 22 discriminator 2 view .LVU123
	bl	fb_ErrorThrowAt
.LVL24:
	.loc 1 71 8 is_stmt 1 discriminator 2 view .LVU124
	.loc 1 71 8 is_stmt 0 discriminator 2 view .LVU125
	mov	pc, r0	@ indirect register jump
.LVL25:
.L69:
	.loc 1 71 8 discriminator 2 view .LVU126
.LBE11:
.LBE13:
.LBE16:
	.loc 1 39 10 is_stmt 1 view .LVU127
	.loc 1 40 2 view .LVU128
	.loc 1 52 21 is_stmt 0 view .LVU129
	vmov	s15, r2	@ int
	.loc 1 40 4 view .LVU130
	ldr	r2, [sp, #204]
	.loc 1 52 21 view .LVU131
	vcvt.f64.s32	d8, s15
	.loc 1 52 42 view .LVU132
	vmov	s15, r3	@ int
	vcvt.f64.s32	d9, s15
	.loc 1 51 21 view .LVU133
	vldr.32	s15, [sp, #204]	@ int
	vcvt.f64.s32	d10, s15
	.loc 1 51 42 view .LVU134
	vldr.32	s15, [sp, #212]	@ int
	.loc 1 40 4 view .LVU135
	vmov	r3, s15	@ int
	.loc 1 51 42 view .LVU136
	vcvt.f64.s32	d15, s15
	.loc 1 52 40 view .LVU137
	vdiv.f64	d7, d8, d9
	.loc 1 40 4 view .LVU138
	cmp	r3, r2
	.loc 1 52 13 view .LVU139
	vcvt.f32.f64	s23, d7
	.loc 1 40 4 view .LVU140
	bge	.L71
.LVL26:
	.loc 1 49 10 is_stmt 1 view .LVU141
	.loc 1 51 2 view .LVU142
	.loc 1 52 2 view .LVU143
	.loc 1 53 2 view .LVU144
	.loc 1 53 24 view .LVU145
	.loc 1 75 11 view .LVU146
	.loc 1 75 2 view .LVU147
	.loc 1 85 4 view .LVU148
.LBB17:
	.loc 1 86 5 view .LVU149
	.loc 1 86 5 view .LVU150
	.loc 1 86 5 view .LVU151
	.loc 1 86 5 view .LVU152
	.loc 1 86 5 view .LVU153
.LBE17:
	.loc 1 51 40 is_stmt 0 view .LVU154
	vdiv.f64	d0, d10, d15
	.loc 1 85 16 view .LVU155
	mov	r9, #0
.LBB18:
	.loc 1 86 5 view .LVU156
	mov	fp, r9
	.loc 1 86 16 view .LVU157
	mov	r8, #1
	.loc 1 86 16 view .LVU158
	vcvt.f32.f64	s0, d0
	bl	nearbyintf
.LVL27:
	.loc 1 86 14 view .LVU159
	vcvt.s32.f32	s15, s0
	.loc 1 86 27 view .LVU160
	vmov	r3, s15	@ int
	.loc 1 86 14 view .LVU161
	vstr.32	s15, [sp, #48]	@ int
.LVL28:
	.loc 1 86 5 is_stmt 1 view .LVU162
	.loc 1 86 5 view .LVU163
	.loc 1 86 27 is_stmt 0 view .LVU164
	mvn	r3, r3
.LVL29:
	.loc 1 86 14 view .LVU165
	asr	r3, r3, #31
	str	r3, [sp, #36]
.LVL30:
	.loc 1 86 5 is_stmt 1 view .LVU166
.L36:
	.loc 1 91 14 discriminator 1 view .LVU167
	.loc 1 91 5 discriminator 1 view .LVU168
	.loc 1 91 7 is_stmt 0 discriminator 1 view .LVU169
	cmp	r3, #0
	.loc 1 91 7 discriminator 1 view .LVU170
	ldr	r3, [sp, #204]
	.loc 1 91 7 discriminator 1 view .LVU171
	bne	.L72
	.loc 1 91 5 is_stmt 1 discriminator 3 view .LVU172
	.loc 1 91 7 is_stmt 0 discriminator 3 view .LVU173
	cmp	r8, r3
	blt	.L3
.L37:
	.loc 1 86 14 is_stmt 1 view .LVU174
	.loc 1 87 6 view .LVU175
.LBB3:
	.loc 1 88 7 is_stmt 0 view .LVU176
	ldr	r3, [sp, #208]
.LBE3:
	.loc 1 87 32 view .LVU177
	add	r9, r9, #1
.LVL31:
.LBB6:
	.loc 1 88 7 is_stmt 1 view .LVU178
	.loc 1 88 7 view .LVU179
	.loc 1 88 7 view .LVU180
	.loc 1 88 7 view .LVU181
	str	r3, [sp, #60]
	.loc 1 88 18 is_stmt 0 view .LVU182
	mov	r3, #1
.LVL32:
	.loc 1 88 18 view .LVU183
	str	r3, [sp, #32]
.LVL33:
.L38:
	.loc 1 90 16 is_stmt 1 discriminator 1 view .LVU184
	.loc 1 90 7 discriminator 1 view .LVU185
	.loc 1 90 9 is_stmt 0 discriminator 1 view .LVU186
	ldr	r2, [sp, #60]
	cmp	r3, r2
	ble	.L40
.L43:
.L44:
	.loc 1 90 16 is_stmt 1 discriminator 4 view .LVU187
.LBE6:
	.loc 1 91 14 discriminator 4 view .LVU188
	.loc 1 91 5 discriminator 4 view .LVU189
	.loc 1 91 29 is_stmt 0 discriminator 4 view .LVU190
	ldr	r3, [sp, #48]
	add	r8, r8, r3
.LVL34:
	.loc 1 91 29 discriminator 4 view .LVU191
	ldr	r3, [sp, #36]
	b	.L36
.LVL35:
.L46:
	.loc 1 91 29 discriminator 4 view .LVU192
.LBE18:
	.loc 1 49 10 is_stmt 1 view .LVU193
	.loc 1 51 2 view .LVU194
	.loc 1 52 2 view .LVU195
	.loc 1 53 2 view .LVU196
	.loc 1 56 4 view .LVU197
.LBB19:
	.loc 1 57 5 view .LVU198
	.loc 1 57 5 view .LVU199
	.loc 1 57 5 view .LVU200
	.loc 1 57 5 view .LVU201
	.loc 1 57 5 view .LVU202
.LBE19:
	.loc 1 51 40 is_stmt 0 view .LVU203
	vdiv.f64	d0, d10, d15
	.loc 1 56 16 view .LVU204
	mov	r9, #0
.LBB27:
	.loc 1 57 16 view .LVU205
	mov	r8, #1
	.loc 1 57 15 view .LVU206
	vcvt.f32.f64	s0, d0
	bl	nearbyintf
.LVL36:
	.loc 1 57 13 view .LVU207
	vcvt.s32.f32	s22, s0
.LVL37:
	.loc 1 57 5 is_stmt 1 view .LVU208
	.loc 1 57 5 view .LVU209
	.loc 1 57 25 is_stmt 0 view .LVU210
	vmov	r3, s22	@ int
	mvn	r10, r3
	.loc 1 57 13 view .LVU211
	asr	r10, r10, #31
.LVL38:
	.loc 1 57 5 is_stmt 1 view .LVU212
.L17:
	.loc 1 64 14 discriminator 1 view .LVU213
	.loc 1 64 5 discriminator 1 view .LVU214
	.loc 1 64 7 is_stmt 0 discriminator 1 view .LVU215
	ldr	r3, [sp, #204]
.LVL39:
	.loc 1 64 7 discriminator 1 view .LVU216
	cmp	r10, #0
	bne	.L73
	.loc 1 64 5 is_stmt 1 discriminator 3 view .LVU217
	.loc 1 64 7 is_stmt 0 discriminator 3 view .LVU218
	cmp	r8, r3
	blt	.L3
.L6:
	.loc 1 57 14 is_stmt 1 view .LVU219
	.loc 1 58 6 view .LVU220
.LBB20:
	.loc 1 60 17 is_stmt 0 view .LVU221
	vmov.f32	s0, s23
.LBE20:
	.loc 1 58 32 view .LVU222
	add	r9, r9, #1
.LVL40:
	.loc 1 59 6 is_stmt 1 view .LVU223
.LBB23:
	.loc 1 60 7 view .LVU224
	.loc 1 60 7 view .LVU225
	.loc 1 60 7 view .LVU226
	.loc 1 60 7 view .LVU227
	.loc 1 60 7 view .LVU228
	.loc 1 60 17 is_stmt 0 view .LVU229
	bl	nearbyintf
.LVL41:
	.loc 1 60 15 view .LVU230
	vcvt.s32.f32	s28, s0
.LVL42:
	.loc 1 60 7 is_stmt 1 view .LVU231
	.loc 1 60 7 view .LVU232
	.loc 1 60 7 is_stmt 0 view .LVU233
	ldr	r3, [sp, #200]
.LBE23:
	.loc 1 59 18 view .LVU234
	mov	fp, #0
.LBB24:
	.loc 1 60 7 view .LVU235
	str	r3, [sp, #40]
	.loc 1 60 18 view .LVU236
	mov	r3, #1
	str	r3, [sp, #32]
	.loc 1 60 27 view .LVU237
	vmov	r3, s28	@ int
	mvn	r3, r3
	.loc 1 60 15 view .LVU238
	asr	r3, r3, #31
	str	r3, [sp, #44]
.LVL43:
	.loc 1 60 7 is_stmt 1 view .LVU239
.L7:
	.loc 1 63 16 discriminator 1 view .LVU240
	.loc 1 63 7 discriminator 1 view .LVU241
	.loc 1 63 9 is_stmt 0 discriminator 1 view .LVU242
	ldr	r3, [sp, #44]
	.loc 1 63 9 discriminator 1 view .LVU243
	ldr	r2, [sp, #40]
	.loc 1 63 9 discriminator 1 view .LVU244
	cmp	r3, #0
	.loc 1 63 9 discriminator 1 view .LVU245
	ldr	r3, [sp, #32]
	.loc 1 63 9 discriminator 1 view .LVU246
	bne	.L74
	.loc 1 63 7 is_stmt 1 discriminator 3 view .LVU247
	.loc 1 63 9 is_stmt 0 discriminator 3 view .LVU248
	cmp	r3, r2
	blt	.L16
.L8:
	.loc 1 60 16 is_stmt 1 view .LVU249
.LBB21:
	.loc 1 61 8 view .LVU250
	.loc 1 61 34 is_stmt 0 view .LVU251
	ldr	r3, [sp, #204]
	add	fp, fp, #1
.LVL44:
	.loc 1 61 34 view .LVU252
	str	r3, [sp, #76]
	ldr	r3, [sp, #64]
	str	r3, [sp, #204]
.LVL45:
.L9:
	.loc 1 62 17 is_stmt 1 view .LVU253
	.loc 1 62 8 view .LVU254
	.loc 1 62 22 is_stmt 0 view .LVU255
	vmov	s15, r9	@ int
	mov	r3, #0
	ldr	r2, [sp, #32]
	mvn	ip, #0
	str	r3, [sp, #28]
	vcvt.f32.s32	s1, s15
	str	r3, [sp, #24]
	vmov	s15, fp	@ int
	str	r3, [sp, #8]
	mov	r3, #1
	vcvt.f32.s32	s0, s15
	ldr	r1, [r7]
	ldr	r0, [r4]
	str	r3, [sp, #12]
	add	r3, r8, r3
	str	ip, [sp, #20]
	movw	ip, #:lower16:fb_hPutPSet
	movt	ip, #:upper16:fb_hPutPSet
	str	r3, [sp, #4]
	str	ip, [sp, #16]
	add	r3, r2, #1
	str	r3, [sp]
	mov	r3, r8
	bl	fb_GfxPut
.LVL46:
	.loc 1 62 8 is_stmt 1 view .LVU256
	.loc 1 62 10 is_stmt 0 view .LVU257
	cmp	r0, #0
	beq	.L13
	.loc 1 62 8 is_stmt 1 discriminator 2 view .LVU258
	.loc 1 62 22 is_stmt 0 discriminator 2 view .LVU259
	ldr	r3, .L75+16
	movw	r1, #:lower16:.LC0
	movt	r1, #:upper16:.LC0
	ldr	r2, .L75+20
	mov	r0, #62
.LVL47:
	.loc 1 62 22 discriminator 2 view .LVU260
	bl	fb_ErrorThrowAt
.LVL48:
	.loc 1 62 8 is_stmt 1 discriminator 2 view .LVU261
	.loc 1 62 8 is_stmt 0 discriminator 2 view .LVU262
	mov	pc, r0	@ indirect register jump
.LVL49:
.L71:
	.loc 1 62 8 discriminator 2 view .LVU263
.LBE21:
.LBE24:
.LBE27:
	.loc 1 40 34 is_stmt 1 view .LVU264
	.loc 1 43 10 view .LVU265
	.loc 1 43 2 view .LVU266
	.loc 1 43 4 is_stmt 0 view .LVU267
	beq	.L3
	mov	r9, #0
.LBB28:
	.loc 1 78 16 view .LVU268
	mov	r8, #1
.LBE28:
	.loc 1 43 4 view .LVU269
	mov	fp, r9
.LVL50:
.L35:
.LBB34:
	.loc 1 82 14 is_stmt 1 discriminator 1 view .LVU270
	.loc 1 82 5 discriminator 1 view .LVU271
	.loc 1 82 7 is_stmt 0 discriminator 1 view .LVU272
	ldr	r3, [sp, #212]
	cmp	r8, r3
	bgt	.L3
	ldr	r3, [sp, #208]
	str	r3, [sp, #72]
.LBB29:
	.loc 1 79 18 view .LVU273
	mov	r3, #1
	str	r3, [sp, #32]
.L32:
.LDL12:
.LVL51:
	.loc 1 81 16 is_stmt 1 discriminator 1 view .LVU274
	.loc 1 81 7 discriminator 1 view .LVU275
	.loc 1 81 9 is_stmt 0 discriminator 1 view .LVU276
	ldr	r3, [sp, #32]
	ldr	r2, [sp, #72]
	cmp	r3, r2
	ble	.L47
.L33:
.L34:
	.loc 1 81 16 is_stmt 1 discriminator 4 view .LVU277
.LBE29:
	.loc 1 82 14 discriminator 4 view .LVU278
	.loc 1 82 5 discriminator 4 view .LVU279
	.loc 1 82 29 is_stmt 0 discriminator 4 view .LVU280
	add	r8, r8, #1
.LVL52:
	.loc 1 82 29 discriminator 4 view .LVU281
	b	.L35
.LVL53:
.L73:
	.loc 1 82 29 discriminator 4 view .LVU282
.LBE34:
.LBB35:
	.loc 1 64 24 is_stmt 1 discriminator 2 view .LVU283
.LDL13:
	.loc 1 64 14 discriminator 2 view .LVU284
	.loc 1 64 5 discriminator 2 view .LVU285
	.loc 1 64 7 is_stmt 0 discriminator 2 view .LVU286
	cmp	r8, r3
	ble	.L6
	b	.L3
.LVL54:
.L72:
	.loc 1 64 7 discriminator 2 view .LVU287
.LBE35:
.LBB36:
	.loc 1 91 25 is_stmt 1 discriminator 2 view .LVU288
.LDL14:
	.loc 1 91 14 discriminator 2 view .LVU289
	.loc 1 91 5 discriminator 2 view .LVU290
	.loc 1 91 7 is_stmt 0 discriminator 2 view .LVU291
	cmp	r8, r3
	bgt	.L3
	b	.L37
.L39:
.LVL55:
.L40:
.LBB7:
	.loc 1 88 16 is_stmt 1 discriminator 1 view .LVU292
.LBB4:
	.loc 1 89 17 discriminator 1 view .LVU293
	.loc 1 89 8 discriminator 1 view .LVU294
	.loc 1 89 107 is_stmt 0 discriminator 1 view .LVU295
	vdiv.f64	d7, d9, d8
	vldr.32	s13, [sp, #32]	@ int
	vcvt.f64.s32	d6, s13
	vdiv.f64	d13, d6, d7
	vmov.f64	d0, d13
	bl	nearbyint
.LVL56:
	vmov.f64	d12, d0
	.loc 1 89 194 discriminator 1 view .LVU296
	vldr.64	d0, .L75
	vadd.f64	d0, d13, d0
	bl	nearbyint
.LVL57:
	vmov.f64	d7, d0
	.loc 1 89 23 discriminator 1 view .LVU297
	vldr.32	s13, [sp, #32]	@ int
	mov	r3, #0
	str	r3, [sp, #28]
	mvn	ip, #0
	str	r3, [sp, #24]
	vcvt.s32.f64	s14, d7
	vmov	s15, r9	@ int
	str	r3, [sp, #8]
	vcvt.f32.s32	s0, s13
	vcvt.f32.s32	s1, s15
	vcvt.s32.f64	s15, d12
	mov	r3, #6
	vstr.32	s14, [sp]	@ int
	ldr	r1, [r7]
	ldr	r0, [r4]
	vmov	r2, s15	@ int
	str	r3, [sp, #12]
	add	r3, r8, #1
	str	ip, [sp, #20]
	movw	ip, #:lower16:fb_hPutAlpha
	movt	ip, #:upper16:fb_hPutAlpha
	str	r3, [sp, #4]
	str	ip, [sp, #16]
	mov	r3, r8
	bl	fb_GfxPut
.LVL58:
	.loc 1 89 8 is_stmt 1 discriminator 1 view .LVU298
	.loc 1 89 10 is_stmt 0 discriminator 1 view .LVU299
	cmp	r0, #0
	beq	.L42
	.loc 1 89 8 is_stmt 1 discriminator 2 view .LVU300
	.loc 1 89 23 is_stmt 0 discriminator 2 view .LVU301
	ldr	r3, .L75+24
	movw	r1, #:lower16:.LC0
	movt	r1, #:upper16:.LC0
	ldr	r2, .L75+28
	mov	r0, #89
.LVL59:
	.loc 1 89 23 discriminator 2 view .LVU302
	bl	fb_ErrorThrowAt
.LVL60:
	.loc 1 89 8 is_stmt 1 discriminator 2 view .LVU303
	.loc 1 89 8 is_stmt 0 discriminator 2 view .LVU304
	mov	pc, r0	@ indirect register jump
.L76:
	.align	3
.L75:
	.word	0
	.word	1072693248
	.word	.L21
	.word	.L20
	.word	.L10
	.word	.L9
	.word	.L41
	.word	.L40
.LVL61:
.L47:
	.loc 1 89 8 discriminator 2 view .LVU305
.LBE4:
.LBE7:
.LBE36:
.LBB37:
.LBB32:
	ldr	r3, [sp, #64]
.LVL62:
	.loc 1 89 8 discriminator 2 view .LVU306
	str	r3, [sp, #204]
	ldr	r3, [sp, #212]
	str	r3, [sp, #84]
.L28:
.LVL63:
.L29:
	.loc 1 79 16 is_stmt 1 discriminator 1 view .LVU307
.LBB30:
	.loc 1 80 17 discriminator 1 view .LVU308
	.loc 1 80 8 discriminator 1 view .LVU309
	.loc 1 80 105 is_stmt 0 discriminator 1 view .LVU310
	vdiv.f64	d7, d9, d8
	vldr.32	s13, [sp, #32]	@ int
	.loc 1 80 255 discriminator 1 view .LVU311
	vldr.64	d12, .L77
	.loc 1 80 105 discriminator 1 view .LVU312
	vcvt.f64.s32	d6, s13
	vdiv.f64	d5, d6, d7
	vmov.f64	d0, d5
	vstr.64	d5, [sp, #64]	@ int
	bl	nearbyint
.LVL64:
	.loc 1 80 180 discriminator 1 view .LVU313
	vmov	s15, r8	@ int
	vdiv.f64	d6, d15, d10
	.loc 1 80 105 discriminator 1 view .LVU314
	vmov.f64	d13, d0
	.loc 1 80 180 discriminator 1 view .LVU315
	vcvt.f64.s32	d4, s15
	vdiv.f64	d7, d4, d6
	vmov.f64	d0, d7
	vstr.64	d7, [sp, #88]	@ int
	bl	nearbyint
.LVL65:
	.loc 1 80 255 discriminator 1 view .LVU316
	vldr.64	d5, [sp, #64]	@ int
	.loc 1 80 180 discriminator 1 view .LVU317
	vmov.f64	d6, d0
	.loc 1 80 255 discriminator 1 view .LVU318
	vadd.f64	d0, d5, d12
	.loc 1 80 180 discriminator 1 view .LVU319
	vstr.64	d6, [sp, #64]	@ int
	.loc 1 80 255 discriminator 1 view .LVU320
	bl	nearbyint
.LVL66:
	.loc 1 80 342 discriminator 1 view .LVU321
	vldr.64	d7, [sp, #88]	@ int
	.loc 1 80 255 discriminator 1 view .LVU322
	vmov.f64	d6, d0
	.loc 1 80 342 discriminator 1 view .LVU323
	vadd.f64	d0, d7, d12
	.loc 1 80 255 discriminator 1 view .LVU324
	vmov.f64	d12, d6
	.loc 1 80 342 discriminator 1 view .LVU325
	bl	nearbyint
.LVL67:
	vmov.f64	d7, d0
	.loc 1 80 22 discriminator 1 view .LVU326
	vldr.64	d5, [sp, #64]	@ int
	mov	r3, #0
	str	r3, [sp, #28]
	str	r3, [sp, #24]
	vmov	s13, r8	@ int
	str	r3, [sp, #8]
	vcvt.s32.f64	s24, d12
	vcvt.s32.f64	s14, d7
	vldr.32	s15, [sp, #32]	@ int
	mov	ip, #1
	vcvt.f32.s32	s1, s13
	vcvt.f32.s32	s0, s15
	vcvt.s32.f64	s15, d5
	vstr.32	s24, [sp]	@ int
	vstr.32	s14, [sp, #4]	@ int
	ldr	r1, [r7]
	ldr	r0, [r4]
	vmov	r3, s15	@ int
	vcvt.s32.f64	s15, d13
	str	ip, [sp, #12]
	mvn	ip, #0
	str	ip, [sp, #20]
	movw	ip, #:lower16:fb_hPutPSet
	movt	ip, #:upper16:fb_hPutPSet
	str	ip, [sp, #16]
	vmov	r2, s15	@ int
	bl	fb_GfxPut
.LVL68:
	.loc 1 80 8 is_stmt 1 discriminator 1 view .LVU327
	.loc 1 80 10 is_stmt 0 discriminator 1 view .LVU328
	cmp	r0, #0
	beq	.L31
	.loc 1 80 8 is_stmt 1 discriminator 2 view .LVU329
	.loc 1 80 22 is_stmt 0 discriminator 2 view .LVU330
	ldr	r3, .L77+8
	movw	r1, #:lower16:.LC0
	movt	r1, #:upper16:.LC0
	ldr	r2, .L77+12
	mov	r0, #80
.LVL69:
	.loc 1 80 22 discriminator 2 view .LVU331
	bl	fb_ErrorThrowAt
.LVL70:
	.loc 1 80 8 is_stmt 1 discriminator 2 view .LVU332
	.loc 1 80 8 is_stmt 0 discriminator 2 view .LVU333
	mov	pc, r0	@ indirect register jump
.LVL71:
.L21:
.L22:
	.loc 1 80 8 discriminator 2 view .LVU334
.LBE30:
.LBE32:
.LBE37:
.LBB38:
.LBB14:
.LBB12:
	.loc 1 71 17 is_stmt 1 discriminator 4 view .LVU335
.LBE12:
	.loc 1 72 16 discriminator 4 view .LVU336
	.loc 1 72 7 discriminator 4 view .LVU337
	.loc 1 72 31 is_stmt 0 discriminator 4 view .LVU338
	vmov	r2, s29	@ int
	ldr	r3, [sp, #80]
	str	r3, [sp, #212]
	ldr	r3, [sp, #32]
	add	r3, r3, r2
	str	r3, [sp, #32]
.LVL72:
	.loc 1 72 31 discriminator 4 view .LVU339
	ldr	r3, [sp, #204]
.LVL73:
	.loc 1 72 31 discriminator 4 view .LVU340
	str	r3, [sp, #64]
	b	.L23
.L10:
.L13:
	.loc 1 72 31 discriminator 4 view .LVU341
.LBE14:
.LBE38:
.LBB39:
.LBB25:
.LBB22:
	.loc 1 62 17 is_stmt 1 discriminator 4 view .LVU342
.LBE22:
	.loc 1 63 16 discriminator 4 view .LVU343
	.loc 1 63 7 discriminator 4 view .LVU344
	.loc 1 63 31 is_stmt 0 discriminator 4 view .LVU345
	vmov	r2, s28	@ int
	ldr	r3, [sp, #32]
	add	r3, r3, r2
	str	r3, [sp, #32]
.LVL74:
	.loc 1 63 31 discriminator 4 view .LVU346
	ldr	r3, [sp, #204]
.LVL75:
	.loc 1 63 31 discriminator 4 view .LVU347
	str	r3, [sp, #64]
	ldr	r3, [sp, #76]
	str	r3, [sp, #204]
.LVL76:
	.loc 1 63 31 discriminator 4 view .LVU348
	b	.L7
.LVL77:
.L41:
.L42:
	.loc 1 63 31 discriminator 4 view .LVU349
.LBE25:
.LBE39:
.LBB40:
.LBB8:
.LBB5:
	.loc 1 89 17 is_stmt 1 discriminator 4 view .LVU350
.LBE5:
	.loc 1 90 16 discriminator 4 view .LVU351
	.loc 1 90 7 discriminator 4 view .LVU352
	.loc 1 90 31 is_stmt 0 discriminator 4 view .LVU353
	ldr	r3, [sp, #32]
	add	r3, r3, #1
	str	r3, [sp, #32]
.LVL78:
	.loc 1 90 31 discriminator 4 view .LVU354
	b	.L38
.LVL79:
.L30:
.L31:
	.loc 1 90 31 discriminator 4 view .LVU355
.LBE8:
.LBE40:
.LBB41:
.LBB33:
.LBB31:
	.loc 1 80 17 is_stmt 1 discriminator 4 view .LVU356
.LBE31:
	.loc 1 81 16 discriminator 4 view .LVU357
	.loc 1 81 7 discriminator 4 view .LVU358
	.loc 1 81 31 is_stmt 0 discriminator 4 view .LVU359
	ldr	r3, [sp, #84]
	str	r3, [sp, #212]
	ldr	r3, [sp, #32]
	add	r3, r3, #1
	str	r3, [sp, #32]
.LVL80:
	.loc 1 81 31 discriminator 4 view .LVU360
	ldr	r3, [sp, #204]
.LVL81:
	.loc 1 81 31 discriminator 4 view .LVU361
	str	r3, [sp, #64]
	b	.L32
.LVL82:
.L70:
	.loc 1 81 31 discriminator 4 view .LVU362
.LBE33:
.LBE41:
.LBB42:
.LBB15:
	.loc 1 72 27 is_stmt 1 discriminator 2 view .LVU363
.LDL15:
	.loc 1 72 16 discriminator 2 view .LVU364
	.loc 1 72 7 discriminator 2 view .LVU365
	.loc 1 72 9 is_stmt 0 discriminator 2 view .LVU366
	cmp	r3, r2
	ble	.L19
.L25:
.L26:
	.loc 1 72 16 is_stmt 1 discriminator 10 view .LVU367
.LBE15:
	.loc 1 73 14 discriminator 10 view .LVU368
	.loc 1 73 5 discriminator 10 view .LVU369
	.loc 1 73 29 is_stmt 0 discriminator 10 view .LVU370
	add	r8, r8, #1
.LVL83:
	.loc 1 73 29 discriminator 10 view .LVU371
	b	.L27
.LVL84:
.L74:
	.loc 1 73 29 discriminator 10 view .LVU372
.LBE42:
.LBB43:
.LBB26:
	.loc 1 63 26 is_stmt 1 discriminator 2 view .LVU373
.LDL16:
	.loc 1 63 16 discriminator 2 view .LVU374
	.loc 1 63 7 discriminator 2 view .LVU375
	.loc 1 63 9 is_stmt 0 discriminator 2 view .LVU376
	cmp	r3, r2
	ble	.L8
.L15:
.L16:
	.loc 1 63 16 is_stmt 1 discriminator 10 view .LVU377
.LBE26:
	.loc 1 64 14 discriminator 10 view .LVU378
	.loc 1 64 5 discriminator 10 view .LVU379
	.loc 1 64 29 is_stmt 0 discriminator 10 view .LVU380
	vmov	r3, s22	@ int
.LVL85:
	.loc 1 64 29 discriminator 10 view .LVU381
	add	r8, r8, r3
.LVL86:
	.loc 1 64 29 discriminator 10 view .LVU382
	b	.L17
.L78:
	.align	3
.L77:
	.word	0
	.word	1072693248
	.word	.L30
	.word	.L29
.LBE43:
	.cfi_endproc
.LFE0:
	.size	IMG_CHANGE_SIZE_QUICK, .-IMG_CHANGE_SIZE_QUICK
	.section	.rodata.str1.4
	.align	2
.LC10:
	.ascii	"{MODLEVEL}\000"
	.section	.text.startup,"ax",%progbits
	.align	2
	.syntax unified
	.arm
	.fpu vfp
	.type	fb_ctor__bitmap, %function
fb_ctor__bitmap:
.LFB1:
	.loc 1 1 1 is_stmt 1 view -0
	.cfi_startproc
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
.L80:
	.loc 1 1 2 view .LVU384
	.loc 1 1 2 view .LVU385
	.loc 1 1 10 view .LVU386
	.loc 1 1 2 view .LVU387
	.loc 1 1 1 is_stmt 0 view .LVU388
	push	{r4, lr}
	.cfi_def_cfa_offset 8
	.cfi_offset 4, -8
	.cfi_offset 14, -4
	.loc 1 1 16 view .LVU389
	movw	r0, #:lower16:.LC0
	movt	r0, #:upper16:.LC0
	bl	fb_ErrorSetModName
.LVL87:
	mov	r4, r0
	.loc 1 1 16 view .LVU390
	movw	r0, #:lower16:.LC10
	movt	r0, #:upper16:.LC10
.LVL88:
	.loc 1 1 2 is_stmt 1 view .LVU391
	.loc 1 1 2 view .LVU392
	.loc 1 1 16 is_stmt 0 view .LVU393
	bl	fb_ErrorSetFuncName
.LVL89:
	.loc 1 1 2 is_stmt 1 view .LVU394
.LDL17:
	.loc 1 4 10 view .LVU395
	.loc 1 4 2 view .LVU396
	bl	fb_ErrorSetFuncName
.LVL90:
	.loc 1 4 2 view .LVU397
	mov	r0, r4
	.loc 1 4 1 is_stmt 0 view .LVU398
	pop	{r4, lr}
	.cfi_restore 14
	.cfi_restore 4
	.cfi_def_cfa_offset 0
.LVL91:
	.loc 1 4 2 view .LVU399
	b	fb_ErrorSetModName
.LVL92:
	.loc 1 4 2 view .LVU400
	.cfi_endproc
.LFE1:
	.size	fb_ctor__bitmap, .-fb_ctor__bitmap
	.section	.init_array,"aw"
	.align	2
	.word	fb_ctor__bitmap
	.text
.Letext0:
	.file 2 "OS2.2/Cpcdos/FBGUI/bitmap.c"
	.file 3 "<built-in>"
	.section	.debug_info,"",%progbits
.Ldebug_info0:
	.4byte	0xc11
	.2byte	0x4
	.4byte	.Ldebug_abbrev0
	.byte	0x4
	.uleb128 0x1
	.4byte	.LASF133
	.byte	0xc
	.4byte	.LASF134
	.4byte	.LASF135
	.4byte	.Ldebug_ranges0+0x1b0
	.4byte	0
	.4byte	.Ldebug_line0
	.uleb128 0x2
	.byte	0x8
	.byte	0x4
	.4byte	.LASF0
	.uleb128 0x3
	.byte	0x4
	.byte	0x5
	.ascii	"int\000"
	.uleb128 0x2
	.byte	0x4
	.byte	0x4
	.4byte	.LASF1
	.uleb128 0x2
	.byte	0x1
	.byte	0x6
	.4byte	.LASF2
	.uleb128 0x4
	.4byte	.LASF6
	.byte	0x2
	.byte	0x2
	.byte	0x1c
	.4byte	0x4d
	.uleb128 0x2
	.byte	0x1
	.byte	0x8
	.4byte	.LASF3
	.uleb128 0x2
	.byte	0x2
	.byte	0x5
	.4byte	.LASF4
	.uleb128 0x2
	.byte	0x2
	.byte	0x7
	.4byte	.LASF5
	.uleb128 0x4
	.4byte	.LASF7
	.byte	0x2
	.byte	0x5
	.byte	0x1d
	.4byte	0x2c
	.uleb128 0x2
	.byte	0x4
	.byte	0x7
	.4byte	.LASF8
	.uleb128 0x2
	.byte	0x8
	.byte	0x5
	.4byte	.LASF9
	.uleb128 0x2
	.byte	0x8
	.byte	0x7
	.4byte	.LASF10
	.uleb128 0x2
	.byte	0x1
	.byte	0x8
	.4byte	.LASF11
	.uleb128 0x5
	.4byte	.LASF136
	.byte	0x1
	.byte	0x1
	.byte	0x2c
	.4byte	.LFB1
	.4byte	.LFE1-.LFB1
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x149
	.uleb128 0x6
	.4byte	.LASF12
	.byte	0x1
	.byte	0x1
	.byte	0x9
	.4byte	0x149
	.4byte	.LLST42
	.4byte	.LVUS42
	.uleb128 0x6
	.4byte	.LASF13
	.byte	0x1
	.byte	0x1
	.byte	0x9
	.4byte	0x149
	.4byte	.LLST43
	.4byte	.LVUS43
	.uleb128 0x7
	.4byte	.LASF16
	.byte	0x1
	.byte	0x1
	.byte	0x2
	.4byte	.L80
	.uleb128 0x6
	.4byte	.LASF14
	.byte	0x1
	.byte	0x1
	.byte	0x9
	.4byte	0x149
	.4byte	.LLST44
	.4byte	.LVUS44
	.uleb128 0x6
	.4byte	.LASF15
	.byte	0x1
	.byte	0x1
	.byte	0x9
	.4byte	0x149
	.4byte	.LLST45
	.4byte	.LVUS45
	.uleb128 0x7
	.4byte	.LASF17
	.byte	0x1
	.byte	0x4
	.byte	0x2
	.4byte	.LDL17
	.uleb128 0x8
	.4byte	.LVL87
	.4byte	0xbce
	.4byte	0x11f
	.uleb128 0x9
	.uleb128 0x1
	.byte	0x50
	.uleb128 0x5
	.byte	0x3
	.4byte	.LC0
	.byte	0
	.uleb128 0x8
	.4byte	.LVL89
	.4byte	0xbda
	.4byte	0x136
	.uleb128 0x9
	.uleb128 0x1
	.byte	0x50
	.uleb128 0x5
	.byte	0x3
	.4byte	.LC10
	.byte	0
	.uleb128 0xa
	.4byte	.LVL90
	.4byte	0xbda
	.uleb128 0xb
	.4byte	.LVL92
	.4byte	0xbce
	.byte	0
	.uleb128 0xc
	.byte	0x4
	.4byte	0x41
	.uleb128 0xd
	.4byte	.LASF137
	.byte	0x1
	.byte	0x4
	.byte	0x7
	.4byte	0xbc6
	.4byte	.LFB0
	.4byte	.LFE0-.LFB0
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xbc6
	.uleb128 0xe
	.4byte	.LASF18
	.byte	0x1
	.byte	0x4
	.byte	0x25
	.4byte	0xbc8
	.4byte	.LLST0
	.4byte	.LVUS0
	.uleb128 0xe
	.4byte	.LASF19
	.byte	0x1
	.byte	0x4
	.byte	0x36
	.4byte	0xbc8
	.4byte	.LLST1
	.4byte	.LVUS1
	.uleb128 0xe
	.4byte	.LASF20
	.byte	0x1
	.byte	0x4
	.byte	0x4b
	.4byte	0x62
	.4byte	.LLST2
	.4byte	.LVUS2
	.uleb128 0xe
	.4byte	.LASF21
	.byte	0x1
	.byte	0x4
	.byte	0x57
	.4byte	0x62
	.4byte	.LLST3
	.4byte	.LVUS3
	.uleb128 0xf
	.4byte	.LASF23
	.byte	0x1
	.byte	0x4
	.byte	0x63
	.4byte	0x62
	.uleb128 0x2
	.byte	0x91
	.sleb128 0
	.uleb128 0xe
	.4byte	.LASF22
	.byte	0x1
	.byte	0x4
	.byte	0x75
	.4byte	0x62
	.4byte	.LLST4
	.4byte	.LVUS4
	.uleb128 0xf
	.4byte	.LASF24
	.byte	0x1
	.byte	0x4
	.byte	0x87
	.4byte	0x62
	.uleb128 0x2
	.byte	0x91
	.sleb128 8
	.uleb128 0xf
	.4byte	.LASF25
	.byte	0x1
	.byte	0x4
	.byte	0x9a
	.4byte	0x62
	.uleb128 0x2
	.byte	0x91
	.sleb128 12
	.uleb128 0x6
	.4byte	.LASF26
	.byte	0x1
	.byte	0x4
	.byte	0x9
	.4byte	0x149
	.4byte	.LLST5
	.4byte	.LVUS5
	.uleb128 0x6
	.4byte	.LASF27
	.byte	0x1
	.byte	0x4
	.byte	0x9
	.4byte	0x149
	.4byte	.LLST6
	.4byte	.LVUS6
	.uleb128 0x6
	.4byte	.LASF28
	.byte	0x1
	.byte	0x4
	.byte	0x8
	.4byte	0xbc6
	.4byte	.LLST7
	.4byte	.LVUS7
	.uleb128 0x6
	.4byte	.LASF15
	.byte	0x1
	.byte	0x4
	.byte	0x9
	.4byte	0x149
	.4byte	.LLST8
	.4byte	.LVUS8
	.uleb128 0x6
	.4byte	.LASF29
	.byte	0x1
	.byte	0x4
	.byte	0x9
	.4byte	0x149
	.4byte	.LLST9
	.4byte	.LVUS9
	.uleb128 0x7
	.4byte	.LASF30
	.byte	0x1
	.byte	0x4
	.byte	0x2
	.4byte	.LDL1
	.uleb128 0x6
	.4byte	.LASF31
	.byte	0x1
	.byte	0x10
	.byte	0x8
	.4byte	0x33
	.4byte	.LLST10
	.4byte	.LVUS10
	.uleb128 0x6
	.4byte	.LASF32
	.byte	0x1
	.byte	0x11
	.byte	0x8
	.4byte	0x33
	.4byte	.LLST11
	.4byte	.LVUS11
	.uleb128 0x6
	.4byte	.LASF33
	.byte	0x1
	.byte	0x13
	.byte	0x8
	.4byte	0x62
	.4byte	.LLST12
	.4byte	.LVUS12
	.uleb128 0x6
	.4byte	.LASF34
	.byte	0x1
	.byte	0x14
	.byte	0x8
	.4byte	0x62
	.4byte	.LLST13
	.4byte	.LVUS13
	.uleb128 0x6
	.4byte	.LASF35
	.byte	0x1
	.byte	0x15
	.byte	0x8
	.4byte	0x62
	.4byte	.LLST14
	.4byte	.LVUS14
	.uleb128 0x6
	.4byte	.LASF36
	.byte	0x1
	.byte	0x16
	.byte	0x8
	.4byte	0x62
	.4byte	.LLST15
	.4byte	.LVUS15
	.uleb128 0x10
	.4byte	.LASF37
	.byte	0x1
	.byte	0x17
	.byte	0x8
	.4byte	0x62
	.byte	0
	.uleb128 0x10
	.4byte	.LASF38
	.byte	0x1
	.byte	0x18
	.byte	0x8
	.4byte	0x62
	.byte	0
	.uleb128 0x6
	.4byte	.LASF39
	.byte	0x1
	.byte	0x19
	.byte	0x8
	.4byte	0x62
	.4byte	.LLST16
	.4byte	.LVUS16
	.uleb128 0x6
	.4byte	.LASF40
	.byte	0x1
	.byte	0x1a
	.byte	0x8
	.4byte	0x62
	.4byte	.LLST17
	.4byte	.LVUS17
	.uleb128 0x7
	.4byte	.LASF41
	.byte	0x1
	.byte	0x21
	.byte	0x2
	.4byte	.LDL2
	.uleb128 0x11
	.4byte	.LASF42
	.byte	0x1
	.byte	0x27
	.byte	0x2
	.uleb128 0x11
	.4byte	.LASF43
	.byte	0x1
	.byte	0x24
	.byte	0x2
	.uleb128 0x11
	.4byte	.LASF44
	.byte	0x1
	.byte	0x2b
	.byte	0x2
	.uleb128 0x11
	.4byte	.LASF45
	.byte	0x1
	.byte	0x31
	.byte	0x2
	.uleb128 0x11
	.4byte	.LASF46
	.byte	0x1
	.byte	0x2e
	.byte	0x2
	.uleb128 0x11
	.4byte	.LASF47
	.byte	0x1
	.byte	0x4b
	.byte	0x2
	.uleb128 0x11
	.4byte	.LASF48
	.byte	0x1
	.byte	0x41
	.byte	0x3
	.uleb128 0x7
	.4byte	.LASF49
	.byte	0x1
	.byte	0x40
	.byte	0x5
	.4byte	.L17
	.uleb128 0x7
	.4byte	.LASF50
	.byte	0x1
	.byte	0x39
	.byte	0x5
	.4byte	.L6
	.uleb128 0x7
	.4byte	.LASF51
	.byte	0x1
	.byte	0x3f
	.byte	0x7
	.4byte	.L7
	.uleb128 0x7
	.4byte	.LASF52
	.byte	0x1
	.byte	0x3c
	.byte	0x7
	.4byte	.L8
	.uleb128 0x7
	.4byte	.LASF53
	.byte	0x1
	.byte	0x3e
	.byte	0x8
	.4byte	.L9
	.uleb128 0x7
	.4byte	.LASF54
	.byte	0x1
	.byte	0x3e
	.byte	0x8
	.4byte	.L10
	.uleb128 0x7
	.4byte	.LASF55
	.byte	0x1
	.byte	0x3f
	.byte	0x7
	.4byte	.L13
	.uleb128 0x7
	.4byte	.LASF56
	.byte	0x1
	.byte	0x3f
	.byte	0x7
	.4byte	.LDL16
	.uleb128 0x7
	.4byte	.LASF57
	.byte	0x1
	.byte	0x3f
	.byte	0x7
	.4byte	.L15
	.uleb128 0x7
	.4byte	.LASF58
	.byte	0x1
	.byte	0x40
	.byte	0x5
	.4byte	.L16
	.uleb128 0x7
	.4byte	.LASF59
	.byte	0x1
	.byte	0x40
	.byte	0x5
	.4byte	.LDL13
	.uleb128 0x11
	.4byte	.LASF60
	.byte	0x1
	.byte	0x40
	.byte	0x5
	.uleb128 0x11
	.4byte	.LASF61
	.byte	0x1
	.byte	0x4a
	.byte	0x3
	.uleb128 0x11
	.4byte	.LASF62
	.byte	0x1
	.byte	0x4a
	.byte	0x3
	.uleb128 0x7
	.4byte	.LASF63
	.byte	0x1
	.byte	0x49
	.byte	0x5
	.4byte	.L27
	.uleb128 0x7
	.4byte	.LASF64
	.byte	0x1
	.byte	0x43
	.byte	0x5
	.4byte	.LDL11
	.uleb128 0x7
	.4byte	.LASF65
	.byte	0x1
	.byte	0x48
	.byte	0x7
	.4byte	.L23
	.uleb128 0x7
	.4byte	.LASF66
	.byte	0x1
	.byte	0x45
	.byte	0x7
	.4byte	.L19
	.uleb128 0x7
	.4byte	.LASF67
	.byte	0x1
	.byte	0x47
	.byte	0x8
	.4byte	.L20
	.uleb128 0x7
	.4byte	.LASF68
	.byte	0x1
	.byte	0x47
	.byte	0x8
	.4byte	.L21
	.uleb128 0x7
	.4byte	.LASF69
	.byte	0x1
	.byte	0x48
	.byte	0x7
	.4byte	.L22
	.uleb128 0x7
	.4byte	.LASF70
	.byte	0x1
	.byte	0x48
	.byte	0x7
	.4byte	.LDL15
	.uleb128 0x7
	.4byte	.LASF71
	.byte	0x1
	.byte	0x48
	.byte	0x7
	.4byte	.L25
	.uleb128 0x7
	.4byte	.LASF72
	.byte	0x1
	.byte	0x49
	.byte	0x5
	.4byte	.L26
	.uleb128 0x11
	.4byte	.LASF73
	.byte	0x1
	.byte	0x49
	.byte	0x5
	.uleb128 0x7
	.4byte	.LASF74
	.byte	0x1
	.byte	0x5d
	.byte	0x2
	.4byte	.LDL8
	.uleb128 0x7
	.4byte	.LASF75
	.byte	0x1
	.byte	0x5d
	.byte	0x2
	.4byte	.LDL7
	.uleb128 0x7
	.4byte	.LASF76
	.byte	0x1
	.byte	0x53
	.byte	0x3
	.4byte	.LDL9
	.uleb128 0x7
	.4byte	.LASF77
	.byte	0x1
	.byte	0x52
	.byte	0x5
	.4byte	.L35
	.uleb128 0x7
	.4byte	.LASF78
	.byte	0x1
	.byte	0x4e
	.byte	0x5
	.4byte	.LDL12
	.uleb128 0x7
	.4byte	.LASF79
	.byte	0x1
	.byte	0x51
	.byte	0x7
	.4byte	.L32
	.uleb128 0x7
	.4byte	.LASF80
	.byte	0x1
	.byte	0x4f
	.byte	0x7
	.4byte	.L28
	.uleb128 0x7
	.4byte	.LASF81
	.byte	0x1
	.byte	0x50
	.byte	0x8
	.4byte	.L29
	.uleb128 0x7
	.4byte	.LASF82
	.byte	0x1
	.byte	0x50
	.byte	0x8
	.4byte	.L30
	.uleb128 0x7
	.4byte	.LASF83
	.byte	0x1
	.byte	0x51
	.byte	0x7
	.4byte	.L31
	.uleb128 0x7
	.4byte	.LASF84
	.byte	0x1
	.byte	0x51
	.byte	0x7
	.4byte	.L33
	.uleb128 0x7
	.4byte	.LASF85
	.byte	0x1
	.byte	0x52
	.byte	0x5
	.4byte	.L34
	.uleb128 0x7
	.4byte	.LASF86
	.byte	0x1
	.byte	0x52
	.byte	0x5
	.4byte	.LDL3
	.uleb128 0x7
	.4byte	.LASF87
	.byte	0x1
	.byte	0x5c
	.byte	0x3
	.4byte	.LDL6
	.uleb128 0x7
	.4byte	.LASF88
	.byte	0x1
	.byte	0x5c
	.byte	0x3
	.4byte	.LDL5
	.uleb128 0x7
	.4byte	.LASF89
	.byte	0x1
	.byte	0x5b
	.byte	0x5
	.4byte	.L36
	.uleb128 0x7
	.4byte	.LASF90
	.byte	0x1
	.byte	0x56
	.byte	0x5
	.4byte	.L37
	.uleb128 0x7
	.4byte	.LASF91
	.byte	0x1
	.byte	0x5a
	.byte	0x7
	.4byte	.L38
	.uleb128 0x7
	.4byte	.LASF92
	.byte	0x1
	.byte	0x58
	.byte	0x7
	.4byte	.L39
	.uleb128 0x7
	.4byte	.LASF93
	.byte	0x1
	.byte	0x59
	.byte	0x8
	.4byte	.L40
	.uleb128 0x7
	.4byte	.LASF94
	.byte	0x1
	.byte	0x59
	.byte	0x8
	.4byte	.L41
	.uleb128 0x7
	.4byte	.LASF95
	.byte	0x1
	.byte	0x5a
	.byte	0x7
	.4byte	.L42
	.uleb128 0x7
	.4byte	.LASF96
	.byte	0x1
	.byte	0x5a
	.byte	0x7
	.4byte	.L43
	.uleb128 0x7
	.4byte	.LASF97
	.byte	0x1
	.byte	0x5b
	.byte	0x5
	.4byte	.L44
	.uleb128 0x7
	.4byte	.LASF98
	.byte	0x1
	.byte	0x5b
	.byte	0x5
	.4byte	.LDL14
	.uleb128 0x7
	.4byte	.LASF99
	.byte	0x1
	.byte	0x5b
	.byte	0x5
	.4byte	.LDL4
	.uleb128 0x7
	.4byte	.LASF100
	.byte	0x1
	.byte	0x61
	.byte	0x2
	.4byte	.LDL10
	.uleb128 0x12
	.4byte	.Ldebug_ranges0+0xd8
	.4byte	0x73e
	.uleb128 0x6
	.4byte	.LASF101
	.byte	0x1
	.byte	0x39
	.byte	0xb
	.4byte	0x62
	.4byte	.LLST30
	.4byte	.LVUS30
	.uleb128 0x6
	.4byte	.LASF102
	.byte	0x1
	.byte	0x39
	.byte	0xb
	.4byte	0x62
	.4byte	.LLST31
	.4byte	.LVUS31
	.uleb128 0x6
	.4byte	.LASF103
	.byte	0x1
	.byte	0x39
	.byte	0xb
	.4byte	0x62
	.4byte	.LLST32
	.4byte	.LVUS32
	.uleb128 0x12
	.4byte	.Ldebug_ranges0+0x108
	.4byte	0x725
	.uleb128 0x6
	.4byte	.LASF104
	.byte	0x1
	.byte	0x3c
	.byte	0xd
	.4byte	0x62
	.4byte	.LLST33
	.4byte	.LVUS33
	.uleb128 0x6
	.4byte	.LASF105
	.byte	0x1
	.byte	0x3c
	.byte	0xd
	.4byte	0x62
	.4byte	.LLST34
	.4byte	.LVUS34
	.uleb128 0x6
	.4byte	.LASF106
	.byte	0x1
	.byte	0x3c
	.byte	0xd
	.4byte	0x62
	.4byte	.LLST35
	.4byte	.LVUS35
	.uleb128 0x12
	.4byte	.Ldebug_ranges0+0x138
	.4byte	0x712
	.uleb128 0x6
	.4byte	.LASF107
	.byte	0x1
	.byte	0x3e
	.byte	0xe
	.4byte	0x62
	.4byte	.LLST36
	.4byte	.LVUS36
	.uleb128 0x6
	.4byte	.LASF108
	.byte	0x1
	.byte	0x3e
	.byte	0xe
	.4byte	0xbc6
	.4byte	.LLST37
	.4byte	.LVUS37
	.uleb128 0x8
	.4byte	.LVL46
	.4byte	0xbe6
	.4byte	0x6e6
	.uleb128 0x9
	.uleb128 0x2
	.byte	0x90
	.uleb128 0x40
	.uleb128 0x6
	.byte	0x7b
	.sleb128 0
	.byte	0xf7
	.uleb128 0x2c
	.byte	0xf7
	.uleb128 0x33
	.uleb128 0x9
	.uleb128 0x2
	.byte	0x90
	.uleb128 0x41
	.uleb128 0x6
	.byte	0x79
	.sleb128 0
	.byte	0xf7
	.uleb128 0x2c
	.byte	0xf7
	.uleb128 0x33
	.uleb128 0x9
	.uleb128 0x1
	.byte	0x52
	.uleb128 0x4
	.byte	0x91
	.sleb128 -176
	.byte	0x6
	.uleb128 0x9
	.uleb128 0x1
	.byte	0x53
	.uleb128 0x2
	.byte	0x78
	.sleb128 0
	.uleb128 0x9
	.uleb128 0x2
	.byte	0x7d
	.sleb128 0
	.uleb128 0x6
	.byte	0x91
	.sleb128 -176
	.byte	0x6
	.byte	0x23
	.uleb128 0x1
	.uleb128 0x9
	.uleb128 0x2
	.byte	0x7d
	.sleb128 4
	.uleb128 0x2
	.byte	0x78
	.sleb128 1
	.uleb128 0x9
	.uleb128 0x2
	.byte	0x7d
	.sleb128 8
	.uleb128 0x1
	.byte	0x30
	.uleb128 0x9
	.uleb128 0x2
	.byte	0x7d
	.sleb128 12
	.uleb128 0x1
	.byte	0x31
	.uleb128 0x9
	.uleb128 0x2
	.byte	0x7d
	.sleb128 20
	.uleb128 0x2
	.byte	0x9
	.byte	0xff
	.uleb128 0x9
	.uleb128 0x2
	.byte	0x7d
	.sleb128 24
	.uleb128 0x1
	.byte	0x30
	.uleb128 0x9
	.uleb128 0x2
	.byte	0x7d
	.sleb128 28
	.uleb128 0x1
	.byte	0x30
	.byte	0
	.uleb128 0x13
	.4byte	.LVL48
	.4byte	0xbf2
	.uleb128 0x9
	.uleb128 0x1
	.byte	0x50
	.uleb128 0x2
	.byte	0x8
	.byte	0x3e
	.uleb128 0x9
	.uleb128 0x1
	.byte	0x51
	.uleb128 0x5
	.byte	0x3
	.4byte	.LC0
	.uleb128 0x9
	.uleb128 0x1
	.byte	0x52
	.uleb128 0x5
	.byte	0x3
	.4byte	.L9
	.uleb128 0x9
	.uleb128 0x1
	.byte	0x53
	.uleb128 0x5
	.byte	0x3
	.4byte	.L10
	.byte	0
	.byte	0
	.uleb128 0x13
	.4byte	.LVL41
	.4byte	0xbfe
	.uleb128 0x9
	.uleb128 0x2
	.byte	0x90
	.uleb128 0x40
	.uleb128 0x3
	.byte	0xf5
	.uleb128 0x57
	.uleb128 0x33
	.byte	0
	.byte	0
	.uleb128 0x13
	.4byte	.LVL36
	.4byte	0xbfe
	.uleb128 0x9
	.uleb128 0x2
	.byte	0x90
	.uleb128 0x40
	.uleb128 0x9
	.byte	0xf5
	.uleb128 0x54
	.uleb128 0x25
	.byte	0xf5
	.uleb128 0x5e
	.uleb128 0x25
	.byte	0x1b
	.byte	0xf7
	.uleb128 0x33
	.byte	0
	.byte	0
	.uleb128 0x12
	.4byte	.Ldebug_ranges0+0x70
	.4byte	0x8b2
	.uleb128 0x6
	.4byte	.LASF109
	.byte	0x1
	.byte	0x43
	.byte	0xb
	.4byte	0x62
	.4byte	.LLST24
	.4byte	.LVUS24
	.uleb128 0x14
	.4byte	.Ldebug_ranges0+0x98
	.uleb128 0x6
	.4byte	.LASF110
	.byte	0x1
	.byte	0x45
	.byte	0xd
	.4byte	0x62
	.4byte	.LLST25
	.4byte	.LVUS25
	.uleb128 0x6
	.4byte	.LASF111
	.byte	0x1
	.byte	0x45
	.byte	0xd
	.4byte	0x62
	.4byte	.LLST26
	.4byte	.LVUS26
	.uleb128 0x6
	.4byte	.LASF112
	.byte	0x1
	.byte	0x45
	.byte	0xd
	.4byte	0x62
	.4byte	.LLST27
	.4byte	.LVUS27
	.uleb128 0x12
	.4byte	.Ldebug_ranges0+0xc0
	.4byte	0x89e
	.uleb128 0x6
	.4byte	.LASF113
	.byte	0x1
	.byte	0x47
	.byte	0xe
	.4byte	0x62
	.4byte	.LLST28
	.4byte	.LVUS28
	.uleb128 0x6
	.4byte	.LASF114
	.byte	0x1
	.byte	0x47
	.byte	0xe
	.4byte	0xbc6
	.4byte	.LLST29
	.4byte	.LVUS29
	.uleb128 0x8
	.4byte	.LVL20
	.4byte	0xc09
	.4byte	0x7e9
	.uleb128 0x9
	.uleb128 0x8
	.byte	0x90
	.uleb128 0x40
	.byte	0x93
	.uleb128 0x4
	.byte	0x90
	.uleb128 0x41
	.byte	0x93
	.uleb128 0x4
	.uleb128 0x3
	.byte	0xf5
	.uleb128 0x5a
	.uleb128 0x25
	.byte	0
	.uleb128 0x8
	.4byte	.LVL21
	.4byte	0xc09
	.4byte	0x811
	.uleb128 0x9
	.uleb128 0x8
	.byte	0x90
	.uleb128 0x40
	.byte	0x93
	.uleb128 0x4
	.byte	0x90
	.uleb128 0x41
	.byte	0x93
	.uleb128 0x4
	.uleb128 0xf
	.byte	0xf5
	.uleb128 0x5a
	.uleb128 0x25
	.byte	0xf4
	.uleb128 0x25
	.byte	0x8
	.4byte	0
	.4byte	0x3ff00000
	.byte	0x22
	.byte	0
	.uleb128 0x8
	.4byte	.LVL22
	.4byte	0xbe6
	.4byte	0x872
	.uleb128 0x9
	.uleb128 0x2
	.byte	0x90
	.uleb128 0x40
	.uleb128 0x6
	.byte	0x7b
	.sleb128 0
	.byte	0xf7
	.uleb128 0x2c
	.byte	0xf7
	.uleb128 0x33
	.uleb128 0x9
	.uleb128 0x2
	.byte	0x90
	.uleb128 0x41
	.uleb128 0x6
	.byte	0x78
	.sleb128 0
	.byte	0xf7
	.uleb128 0x2c
	.byte	0xf7
	.uleb128 0x33
	.uleb128 0x9
	.uleb128 0x1
	.byte	0x52
	.uleb128 0x4
	.byte	0x91
	.sleb128 -176
	.byte	0x6
	.uleb128 0x9
	.uleb128 0x1
	.byte	0x53
	.uleb128 0x7
	.byte	0xf5
	.uleb128 0x58
	.uleb128 0x25
	.byte	0xf7
	.uleb128 0x2c
	.byte	0xf7
	.uleb128 0
	.uleb128 0x9
	.uleb128 0x2
	.byte	0x7d
	.sleb128 0
	.uleb128 0x6
	.byte	0x91
	.sleb128 -176
	.byte	0x6
	.byte	0x23
	.uleb128 0x1
	.uleb128 0x9
	.uleb128 0x2
	.byte	0x7d
	.sleb128 8
	.uleb128 0x1
	.byte	0x30
	.uleb128 0x9
	.uleb128 0x2
	.byte	0x7d
	.sleb128 12
	.uleb128 0x1
	.byte	0x31
	.uleb128 0x9
	.uleb128 0x2
	.byte	0x7d
	.sleb128 20
	.uleb128 0x2
	.byte	0x9
	.byte	0xff
	.uleb128 0x9
	.uleb128 0x2
	.byte	0x7d
	.sleb128 24
	.uleb128 0x1
	.byte	0x30
	.uleb128 0x9
	.uleb128 0x2
	.byte	0x7d
	.sleb128 28
	.uleb128 0x1
	.byte	0x30
	.byte	0
	.uleb128 0x13
	.4byte	.LVL24
	.4byte	0xbf2
	.uleb128 0x9
	.uleb128 0x1
	.byte	0x50
	.uleb128 0x2
	.byte	0x8
	.byte	0x47
	.uleb128 0x9
	.uleb128 0x1
	.byte	0x51
	.uleb128 0x5
	.byte	0x3
	.4byte	.LC0
	.uleb128 0x9
	.uleb128 0x1
	.byte	0x52
	.uleb128 0x5
	.byte	0x3
	.4byte	.L20
	.uleb128 0x9
	.uleb128 0x1
	.byte	0x53
	.uleb128 0x5
	.byte	0x3
	.4byte	.L21
	.byte	0
	.byte	0
	.uleb128 0x13
	.4byte	.LVL15
	.4byte	0xbfe
	.uleb128 0x9
	.uleb128 0x2
	.byte	0x90
	.uleb128 0x40
	.uleb128 0x3
	.byte	0xf5
	.uleb128 0x57
	.uleb128 0x33
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x12
	.4byte	.Ldebug_ranges0+0x150
	.4byte	0x9fd
	.uleb128 0x6
	.4byte	.LASF115
	.byte	0x1
	.byte	0x4e
	.byte	0xb
	.4byte	0x62
	.4byte	.LLST38
	.4byte	.LVUS38
	.uleb128 0x14
	.4byte	.Ldebug_ranges0+0x178
	.uleb128 0x6
	.4byte	.LASF116
	.byte	0x1
	.byte	0x4f
	.byte	0xd
	.4byte	0x62
	.4byte	.LLST39
	.4byte	.LVUS39
	.uleb128 0x14
	.4byte	.Ldebug_ranges0+0x198
	.uleb128 0x6
	.4byte	.LASF117
	.byte	0x1
	.byte	0x50
	.byte	0xe
	.4byte	0x62
	.4byte	.LLST40
	.4byte	.LVUS40
	.uleb128 0x6
	.4byte	.LASF118
	.byte	0x1
	.byte	0x50
	.byte	0xe
	.4byte	0xbc6
	.4byte	.LLST41
	.4byte	.LVUS41
	.uleb128 0x8
	.4byte	.LVL64
	.4byte	0xc09
	.4byte	0x93e
	.uleb128 0x9
	.uleb128 0x8
	.byte	0x90
	.uleb128 0x40
	.byte	0x93
	.uleb128 0x4
	.byte	0x90
	.uleb128 0x41
	.byte	0x93
	.uleb128 0x4
	.uleb128 0x10
	.byte	0x91
	.sleb128 -176
	.byte	0x6
	.byte	0xf7
	.uleb128 0x2c
	.byte	0xf7
	.uleb128 0x25
	.byte	0xf5
	.uleb128 0x52
	.uleb128 0x25
	.byte	0xf5
	.uleb128 0x50
	.uleb128 0x25
	.byte	0x1b
	.byte	0x1b
	.byte	0
	.uleb128 0x8
	.4byte	.LVL65
	.4byte	0xc09
	.4byte	0x965
	.uleb128 0x9
	.uleb128 0x8
	.byte	0x90
	.uleb128 0x40
	.byte	0x93
	.uleb128 0x4
	.byte	0x90
	.uleb128 0x41
	.byte	0x93
	.uleb128 0x4
	.uleb128 0xe
	.byte	0x78
	.sleb128 0
	.byte	0xf7
	.uleb128 0x2c
	.byte	0xf7
	.uleb128 0x25
	.byte	0xf5
	.uleb128 0x5e
	.uleb128 0x25
	.byte	0xf5
	.uleb128 0x54
	.uleb128 0x25
	.byte	0x1b
	.byte	0x1b
	.byte	0
	.uleb128 0xa
	.4byte	.LVL66
	.4byte	0xc09
	.uleb128 0xa
	.4byte	.LVL67
	.4byte	0xc09
	.uleb128 0x8
	.4byte	.LVL68
	.4byte	0xbe6
	.4byte	0x9cf
	.uleb128 0x9
	.uleb128 0x2
	.byte	0x90
	.uleb128 0x40
	.uleb128 0x8
	.byte	0x91
	.sleb128 -176
	.byte	0x6
	.byte	0xf7
	.uleb128 0x2c
	.byte	0xf7
	.uleb128 0x33
	.uleb128 0x9
	.uleb128 0x2
	.byte	0x90
	.uleb128 0x41
	.uleb128 0x6
	.byte	0x78
	.sleb128 0
	.byte	0xf7
	.uleb128 0x2c
	.byte	0xf7
	.uleb128 0x33
	.uleb128 0x9
	.uleb128 0x1
	.byte	0x52
	.uleb128 0x7
	.byte	0xf5
	.uleb128 0x5a
	.uleb128 0x25
	.byte	0xf7
	.uleb128 0x2c
	.byte	0xf7
	.uleb128 0
	.uleb128 0x9
	.uleb128 0x2
	.byte	0x7d
	.sleb128 0
	.uleb128 0x3
	.byte	0x92
	.uleb128 0x58
	.sleb128 0
	.uleb128 0x9
	.uleb128 0x2
	.byte	0x7d
	.sleb128 8
	.uleb128 0x1
	.byte	0x30
	.uleb128 0x9
	.uleb128 0x2
	.byte	0x7d
	.sleb128 12
	.uleb128 0x1
	.byte	0x31
	.uleb128 0x9
	.uleb128 0x2
	.byte	0x7d
	.sleb128 20
	.uleb128 0x2
	.byte	0x9
	.byte	0xff
	.uleb128 0x9
	.uleb128 0x2
	.byte	0x7d
	.sleb128 24
	.uleb128 0x1
	.byte	0x30
	.uleb128 0x9
	.uleb128 0x2
	.byte	0x7d
	.sleb128 28
	.uleb128 0x1
	.byte	0x30
	.byte	0
	.uleb128 0x13
	.4byte	.LVL70
	.4byte	0xbf2
	.uleb128 0x9
	.uleb128 0x1
	.byte	0x50
	.uleb128 0x2
	.byte	0x8
	.byte	0x50
	.uleb128 0x9
	.uleb128 0x1
	.byte	0x51
	.uleb128 0x5
	.byte	0x3
	.4byte	.LC0
	.uleb128 0x9
	.uleb128 0x1
	.byte	0x52
	.uleb128 0x5
	.byte	0x3
	.4byte	.L29
	.uleb128 0x9
	.uleb128 0x1
	.byte	0x53
	.uleb128 0x5
	.byte	0x3
	.4byte	.L30
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x12
	.4byte	.Ldebug_ranges0+0
	.4byte	0xb73
	.uleb128 0x6
	.4byte	.LASF119
	.byte	0x1
	.byte	0x56
	.byte	0xb
	.4byte	0x62
	.4byte	.LLST18
	.4byte	.LVUS18
	.uleb128 0x6
	.4byte	.LASF120
	.byte	0x1
	.byte	0x56
	.byte	0xb
	.4byte	0x62
	.4byte	.LLST19
	.4byte	.LVUS19
	.uleb128 0x6
	.4byte	.LASF121
	.byte	0x1
	.byte	0x56
	.byte	0xb
	.4byte	0x62
	.4byte	.LLST20
	.4byte	.LVUS20
	.uleb128 0x12
	.4byte	.Ldebug_ranges0+0x30
	.4byte	0xb5a
	.uleb128 0x6
	.4byte	.LASF122
	.byte	0x1
	.byte	0x58
	.byte	0xd
	.4byte	0x62
	.4byte	.LLST21
	.4byte	.LVUS21
	.uleb128 0x14
	.4byte	.Ldebug_ranges0+0x58
	.uleb128 0x6
	.4byte	.LASF123
	.byte	0x1
	.byte	0x59
	.byte	0xe
	.4byte	0x62
	.4byte	.LLST22
	.4byte	.LVUS22
	.uleb128 0x6
	.4byte	.LASF124
	.byte	0x1
	.byte	0x59
	.byte	0xe
	.4byte	0xbc6
	.4byte	.LLST23
	.4byte	.LVUS23
	.uleb128 0x8
	.4byte	.LVL56
	.4byte	0xc09
	.4byte	0xaa8
	.uleb128 0x9
	.uleb128 0x8
	.byte	0x90
	.uleb128 0x40
	.byte	0x93
	.uleb128 0x4
	.byte	0x90
	.uleb128 0x41
	.byte	0x93
	.uleb128 0x4
	.uleb128 0x3
	.byte	0xf5
	.uleb128 0x5a
	.uleb128 0x25
	.byte	0
	.uleb128 0x8
	.4byte	.LVL57
	.4byte	0xc09
	.4byte	0xad0
	.uleb128 0x9
	.uleb128 0x8
	.byte	0x90
	.uleb128 0x40
	.byte	0x93
	.uleb128 0x4
	.byte	0x90
	.uleb128 0x41
	.byte	0x93
	.uleb128 0x4
	.uleb128 0xf
	.byte	0xf5
	.uleb128 0x5a
	.uleb128 0x25
	.byte	0xf4
	.uleb128 0x25
	.byte	0x8
	.4byte	0
	.4byte	0x3ff00000
	.byte	0x22
	.byte	0
	.uleb128 0x8
	.4byte	.LVL58
	.4byte	0xbe6
	.4byte	0xb2d
	.uleb128 0x9
	.uleb128 0x2
	.byte	0x90
	.uleb128 0x40
	.uleb128 0x8
	.byte	0x91
	.sleb128 -176
	.byte	0x6
	.byte	0xf7
	.uleb128 0x2c
	.byte	0xf7
	.uleb128 0x33
	.uleb128 0x9
	.uleb128 0x2
	.byte	0x90
	.uleb128 0x41
	.uleb128 0x6
	.byte	0x79
	.sleb128 0
	.byte	0xf7
	.uleb128 0x2c
	.byte	0xf7
	.uleb128 0x33
	.uleb128 0x9
	.uleb128 0x1
	.byte	0x52
	.uleb128 0x7
	.byte	0xf5
	.uleb128 0x58
	.uleb128 0x25
	.byte	0xf7
	.uleb128 0x2c
	.byte	0xf7
	.uleb128 0
	.uleb128 0x9
	.uleb128 0x1
	.byte	0x53
	.uleb128 0x2
	.byte	0x78
	.sleb128 0
	.uleb128 0x9
	.uleb128 0x2
	.byte	0x7d
	.sleb128 4
	.uleb128 0x2
	.byte	0x78
	.sleb128 1
	.uleb128 0x9
	.uleb128 0x2
	.byte	0x7d
	.sleb128 8
	.uleb128 0x1
	.byte	0x30
	.uleb128 0x9
	.uleb128 0x2
	.byte	0x7d
	.sleb128 12
	.uleb128 0x1
	.byte	0x36
	.uleb128 0x9
	.uleb128 0x2
	.byte	0x7d
	.sleb128 20
	.uleb128 0x2
	.byte	0x9
	.byte	0xff
	.uleb128 0x9
	.uleb128 0x2
	.byte	0x7d
	.sleb128 24
	.uleb128 0x1
	.byte	0x30
	.uleb128 0x9
	.uleb128 0x2
	.byte	0x7d
	.sleb128 28
	.uleb128 0x1
	.byte	0x30
	.byte	0
	.uleb128 0x13
	.4byte	.LVL60
	.4byte	0xbf2
	.uleb128 0x9
	.uleb128 0x1
	.byte	0x50
	.uleb128 0x2
	.byte	0x8
	.byte	0x59
	.uleb128 0x9
	.uleb128 0x1
	.byte	0x51
	.uleb128 0x5
	.byte	0x3
	.4byte	.LC0
	.uleb128 0x9
	.uleb128 0x1
	.byte	0x52
	.uleb128 0x5
	.byte	0x3
	.4byte	.L40
	.uleb128 0x9
	.uleb128 0x1
	.byte	0x53
	.uleb128 0x5
	.byte	0x3
	.4byte	.L41
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x13
	.4byte	.LVL27
	.4byte	0xbfe
	.uleb128 0x9
	.uleb128 0x2
	.byte	0x90
	.uleb128 0x40
	.uleb128 0x9
	.byte	0xf5
	.uleb128 0x54
	.uleb128 0x25
	.byte	0xf5
	.uleb128 0x5e
	.uleb128 0x25
	.byte	0x1b
	.byte	0xf7
	.uleb128 0x33
	.byte	0
	.byte	0
	.uleb128 0x8
	.4byte	.LVL3
	.4byte	0xbce
	.4byte	0xb8a
	.uleb128 0x9
	.uleb128 0x1
	.byte	0x50
	.uleb128 0x5
	.byte	0x3
	.4byte	.LC0
	.byte	0
	.uleb128 0x8
	.4byte	.LVL5
	.4byte	0xbda
	.4byte	0xba1
	.uleb128 0x9
	.uleb128 0x1
	.byte	0x50
	.uleb128 0x5
	.byte	0x3
	.4byte	.LC1
	.byte	0
	.uleb128 0x8
	.4byte	.LVL9
	.4byte	0xbda
	.4byte	0xbb5
	.uleb128 0x9
	.uleb128 0x1
	.byte	0x50
	.uleb128 0x2
	.byte	0x76
	.sleb128 0
	.byte	0
	.uleb128 0x13
	.4byte	.LVL10
	.4byte	0xbce
	.uleb128 0x9
	.uleb128 0x1
	.byte	0x50
	.uleb128 0x2
	.byte	0x75
	.sleb128 0
	.byte	0
	.byte	0
	.uleb128 0x15
	.byte	0x4
	.uleb128 0xc
	.byte	0x4
	.4byte	0xbc6
	.uleb128 0x16
	.4byte	.LASF125
	.4byte	.LASF125
	.byte	0x1
	.byte	0x4
	.byte	0x8
	.uleb128 0x16
	.4byte	.LASF126
	.4byte	.LASF126
	.byte	0x1
	.byte	0x4
	.byte	0x8
	.uleb128 0x16
	.4byte	.LASF127
	.4byte	.LASF127
	.byte	0x1
	.byte	0x4
	.byte	0x7
	.uleb128 0x16
	.4byte	.LASF128
	.4byte	.LASF128
	.byte	0x1
	.byte	0x4
	.byte	0x7
	.uleb128 0x17
	.4byte	.LASF129
	.4byte	.LASF131
	.byte	0x3
	.byte	0
	.uleb128 0x17
	.4byte	.LASF130
	.4byte	.LASF132
	.byte	0x3
	.byte	0
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
	.uleb128 0x4
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
	.uleb128 0x5
	.uleb128 0x2e
	.byte	0x1
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
	.uleb128 0x6
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
	.uleb128 0x7
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
	.uleb128 0x8
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
	.uleb128 0x9
	.uleb128 0x410a
	.byte	0
	.uleb128 0x2
	.uleb128 0x18
	.uleb128 0x2111
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0xa
	.uleb128 0x4109
	.byte	0
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x31
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xb
	.uleb128 0x4109
	.byte	0
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x2115
	.uleb128 0x19
	.uleb128 0x31
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xc
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xd
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
	.uleb128 0xe
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
	.uleb128 0xf
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
	.uleb128 0x1c
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x11
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
	.byte	0
	.byte	0
	.uleb128 0x12
	.uleb128 0xb
	.byte	0x1
	.uleb128 0x55
	.uleb128 0x17
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
	.byte	0
	.byte	0
	.uleb128 0x14
	.uleb128 0xb
	.byte	0x1
	.uleb128 0x55
	.uleb128 0x17
	.byte	0
	.byte	0
	.uleb128 0x15
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x16
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
	.byte	0
	.byte	0
	.byte	0
	.section	.debug_loc,"",%progbits
.Ldebug_loc0:
.LVUS42:
	.uleb128 .LVU392
	.uleb128 .LVU399
	.uleb128 .LVU399
	.uleb128 .LVU400
.LLST42:
	.4byte	.LVL88
	.4byte	.LVL91
	.2byte	0x1
	.byte	0x54
	.4byte	.LVL91
	.4byte	.LVL92-1
	.2byte	0x1
	.byte	0x50
	.4byte	0
	.4byte	0
.LVUS43:
	.uleb128 .LVU395
	.uleb128 .LVU397
.LLST43:
	.4byte	.LVL89
	.4byte	.LVL90-1
	.2byte	0x1
	.byte	0x50
	.4byte	0
	.4byte	0
.LVUS44:
	.uleb128 .LVU391
	.uleb128 .LVU399
	.uleb128 .LVU399
	.uleb128 .LVU400
.LLST44:
	.4byte	.LVL88
	.4byte	.LVL91
	.2byte	0x1
	.byte	0x54
	.4byte	.LVL91
	.4byte	.LVL92-1
	.2byte	0x1
	.byte	0x50
	.4byte	0
	.4byte	0
.LVUS45:
	.uleb128 .LVU394
	.uleb128 .LVU397
.LLST45:
	.4byte	.LVL89
	.4byte	.LVL90-1
	.2byte	0x1
	.byte	0x50
	.4byte	0
	.4byte	0
.LVUS0:
	.uleb128 0
	.uleb128 .LVU3
	.uleb128 .LVU3
	.uleb128 0
.LLST0:
	.4byte	.LVL0
	.4byte	.LVL1
	.2byte	0x1
	.byte	0x50
	.4byte	.LVL1
	.4byte	.LFE0
	.2byte	0x1
	.byte	0x57
	.4byte	0
	.4byte	0
.LVUS1:
	.uleb128 0
	.uleb128 .LVU12
	.uleb128 .LVU12
	.uleb128 .LVU54
	.uleb128 .LVU54
	.uleb128 .LVU59
	.uleb128 .LVU59
	.uleb128 0
.LLST1:
	.4byte	.LVL0
	.4byte	.LVL3-1
	.2byte	0x1
	.byte	0x51
	.4byte	.LVL3-1
	.4byte	.LVL8
	.2byte	0x1
	.byte	0x54
	.4byte	.LVL8
	.4byte	.LVL11
	.2byte	0x4
	.byte	0xf3
	.uleb128 0x1
	.byte	0x51
	.byte	0x9f
	.4byte	.LVL11
	.4byte	.LFE0
	.2byte	0x1
	.byte	0x54
	.4byte	0
	.4byte	0
.LVUS2:
	.uleb128 0
	.uleb128 .LVU12
	.uleb128 .LVU12
	.uleb128 0
.LLST2:
	.4byte	.LVL0
	.4byte	.LVL3-1
	.2byte	0x1
	.byte	0x52
	.4byte	.LVL3-1
	.4byte	.LFE0
	.2byte	0x4
	.byte	0xf3
	.uleb128 0x1
	.byte	0x52
	.byte	0x9f
	.4byte	0
	.4byte	0
.LVUS3:
	.uleb128 0
	.uleb128 .LVU12
	.uleb128 .LVU12
	.uleb128 0
.LLST3:
	.4byte	.LVL0
	.4byte	.LVL3-1
	.2byte	0x1
	.byte	0x53
	.4byte	.LVL3-1
	.4byte	.LFE0
	.2byte	0x4
	.byte	0xf3
	.uleb128 0x1
	.byte	0x53
	.byte	0x9f
	.4byte	0
	.4byte	0
.LVUS4:
	.uleb128 0
	.uleb128 .LVU47
	.uleb128 .LVU59
	.uleb128 .LVU79
	.uleb128 .LVU126
	.uleb128 .LVU167
	.uleb128 .LVU192
	.uleb128 .LVU213
	.uleb128 .LVU263
	.uleb128 .LVU270
.LLST4:
	.4byte	.LVL0
	.4byte	.LVL7
	.2byte	0x2
	.byte	0x91
	.sleb128 4
	.4byte	.LVL11
	.4byte	.LVL13
	.2byte	0x2
	.byte	0x91
	.sleb128 4
	.4byte	.LVL25
	.4byte	.LVL30
	.2byte	0x2
	.byte	0x91
	.sleb128 4
	.4byte	.LVL35
	.4byte	.LVL38
	.2byte	0x2
	.byte	0x91
	.sleb128 4
	.4byte	.LVL49
	.4byte	.LVL50
	.2byte	0x2
	.byte	0x91
	.sleb128 4
	.4byte	0
	.4byte	0
.LVUS5:
	.uleb128 .LVU15
	.uleb128 0
.LLST5:
	.4byte	.LVL4
	.4byte	.LFE0
	.2byte	0x1
	.byte	0x55
	.4byte	0
	.4byte	0
.LVUS6:
	.uleb128 .LVU20
	.uleb128 .LVU47
	.uleb128 .LVU47
	.uleb128 .LVU59
	.uleb128 .LVU59
	.uleb128 .LVU79
	.uleb128 .LVU79
	.uleb128 .LVU126
	.uleb128 .LVU126
	.uleb128 .LVU159
	.uleb128 .LVU159
	.uleb128 .LVU192
	.uleb128 .LVU192
	.uleb128 .LVU207
	.uleb128 .LVU207
	.uleb128 .LVU263
	.uleb128 .LVU263
	.uleb128 .LVU270
	.uleb128 .LVU270
	.uleb128 0
.LLST6:
	.4byte	.LVL6
	.4byte	.LVL7
	.2byte	0x1
	.byte	0x50
	.4byte	.LVL7
	.4byte	.LVL11
	.2byte	0x1
	.byte	0x56
	.4byte	.LVL11
	.4byte	.LVL13
	.2byte	0x1
	.byte	0x50
	.4byte	.LVL13
	.4byte	.LVL25
	.2byte	0x1
	.byte	0x56
	.4byte	.LVL25
	.4byte	.LVL27-1
	.2byte	0x1
	.byte	0x50
	.4byte	.LVL27-1
	.4byte	.LVL35
	.2byte	0x1
	.byte	0x56
	.4byte	.LVL35
	.4byte	.LVL36-1
	.2byte	0x1
	.byte	0x50
	.4byte	.LVL36-1
	.4byte	.LVL49
	.2byte	0x1
	.byte	0x56
	.4byte	.LVL49
	.4byte	.LVL50
	.2byte	0x1
	.byte	0x50
	.4byte	.LVL50
	.4byte	.LFE0
	.2byte	0x1
	.byte	0x56
	.4byte	0
	.4byte	0
.LVUS7:
	.uleb128 .LVU9
	.uleb128 .LVU54
	.uleb128 .LVU54
	.uleb128 .LVU59
	.uleb128 .LVU59
	.uleb128 0
.LLST7:
	.4byte	.LVL2
	.4byte	.LVL8
	.2byte	0x2
	.byte	0x30
	.byte	0x9f
	.4byte	.LVL8
	.4byte	.LVL11
	.2byte	0x1
	.byte	0x54
	.4byte	.LVL11
	.4byte	.LFE0
	.2byte	0x2
	.byte	0x30
	.byte	0x9f
	.4byte	0
	.4byte	0
.LVUS8:
	.uleb128 .LVU14
	.uleb128 0
.LLST8:
	.4byte	.LVL4
	.4byte	.LFE0
	.2byte	0x1
	.byte	0x55
	.4byte	0
	.4byte	0
.LVUS9:
	.uleb128 .LVU19
	.uleb128 .LVU47
	.uleb128 .LVU47
	.uleb128 .LVU59
	.uleb128 .LVU59
	.uleb128 .LVU79
	.uleb128 .LVU79
	.uleb128 .LVU126
	.uleb128 .LVU126
	.uleb128 .LVU159
	.uleb128 .LVU159
	.uleb128 .LVU192
	.uleb128 .LVU192
	.uleb128 .LVU207
	.uleb128 .LVU207
	.uleb128 .LVU263
	.uleb128 .LVU263
	.uleb128 .LVU270
	.uleb128 .LVU270
	.uleb128 0
.LLST9:
	.4byte	.LVL6
	.4byte	.LVL7
	.2byte	0x1
	.byte	0x50
	.4byte	.LVL7
	.4byte	.LVL11
	.2byte	0x1
	.byte	0x56
	.4byte	.LVL11
	.4byte	.LVL13
	.2byte	0x1
	.byte	0x50
	.4byte	.LVL13
	.4byte	.LVL25
	.2byte	0x1
	.byte	0x56
	.4byte	.LVL25
	.4byte	.LVL27-1
	.2byte	0x1
	.byte	0x50
	.4byte	.LVL27-1
	.4byte	.LVL35
	.2byte	0x1
	.byte	0x56
	.4byte	.LVL35
	.4byte	.LVL36-1
	.2byte	0x1
	.byte	0x50
	.4byte	.LVL36-1
	.4byte	.LVL49
	.2byte	0x1
	.byte	0x56
	.4byte	.LVL49
	.4byte	.LVL50
	.2byte	0x1
	.byte	0x50
	.4byte	.LVL50
	.4byte	.LFE0
	.2byte	0x1
	.byte	0x56
	.4byte	0
	.4byte	0
.LVUS10:
	.uleb128 .LVU144
	.uleb128 .LVU167
	.uleb128 .LVU196
	.uleb128 .LVU213
.LLST10:
	.4byte	.LVL26
	.4byte	.LVL30
	.2byte	0x12
	.byte	0x91
	.sleb128 -8
	.byte	0x6
	.byte	0xf7
	.uleb128 0x2c
	.byte	0xf7
	.uleb128 0x25
	.byte	0x91
	.sleb128 0
	.byte	0x6
	.byte	0xf7
	.uleb128 0x2c
	.byte	0xf7
	.uleb128 0x25
	.byte	0x1b
	.byte	0xf7
	.uleb128 0x33
	.byte	0x9f
	.4byte	.LVL35
	.4byte	.LVL38
	.2byte	0x12
	.byte	0x91
	.sleb128 -8
	.byte	0x6
	.byte	0xf7
	.uleb128 0x2c
	.byte	0xf7
	.uleb128 0x25
	.byte	0x91
	.sleb128 0
	.byte	0x6
	.byte	0xf7
	.uleb128 0x2c
	.byte	0xf7
	.uleb128 0x25
	.byte	0x1b
	.byte	0xf7
	.uleb128 0x33
	.byte	0x9f
	.4byte	0
	.4byte	0
.LVUS11:
	.uleb128 .LVU143
	.uleb128 .LVU167
	.uleb128 .LVU195
	.uleb128 .LVU213
.LLST11:
	.4byte	.LVL26
	.4byte	.LVL30
	.2byte	0xe
	.byte	0xf5
	.uleb128 0x54
	.uleb128 0x25
	.byte	0x91
	.sleb128 4
	.byte	0x6
	.byte	0xf7
	.uleb128 0x2c
	.byte	0xf7
	.uleb128 0x25
	.byte	0x1b
	.byte	0xf7
	.uleb128 0x33
	.byte	0x9f
	.4byte	.LVL35
	.4byte	.LVL38
	.2byte	0x12
	.byte	0x91
	.sleb128 -4
	.byte	0x6
	.byte	0xf7
	.uleb128 0x2c
	.byte	0xf7
	.uleb128 0x25
	.byte	0x91
	.sleb128 4
	.byte	0x6
	.byte	0xf7
	.uleb128 0x2c
	.byte	0xf7
	.uleb128 0x25
	.byte	0x1b
	.byte	0xf7
	.uleb128 0x33
	.byte	0x9f
	.4byte	0
	.4byte	0
.LVUS12:
	.uleb128 .LVU27
	.uleb128 .LVU47
	.uleb128 .LVU59
	.uleb128 .LVU79
	.uleb128 .LVU86
	.uleb128 .LVU101
	.uleb128 .LVU101
	.uleb128 .LVU126
	.uleb128 .LVU126
	.uleb128 .LVU167
	.uleb128 .LVU179
	.uleb128 .LVU184
	.uleb128 .LVU184
	.uleb128 .LVU192
	.uleb128 .LVU192
	.uleb128 .LVU213
	.uleb128 .LVU225
	.uleb128 .LVU240
	.uleb128 .LVU240
	.uleb128 .LVU263
	.uleb128 .LVU263
	.uleb128 .LVU270
	.uleb128 .LVU274
	.uleb128 .LVU282
	.uleb128 .LVU292
	.uleb128 .LVU305
	.uleb128 .LVU305
	.uleb128 .LVU306
	.uleb128 .LVU306
	.uleb128 .LVU339
	.uleb128 .LVU339
	.uleb128 .LVU340
	.uleb128 .LVU340
	.uleb128 .LVU346
	.uleb128 .LVU346
	.uleb128 .LVU347
	.uleb128 .LVU347
	.uleb128 .LVU354
	.uleb128 .LVU354
	.uleb128 .LVU355
	.uleb128 .LVU355
	.uleb128 .LVU360
	.uleb128 .LVU360
	.uleb128 .LVU361
	.uleb128 .LVU361
	.uleb128 .LVU362
	.uleb128 .LVU362
	.uleb128 .LVU381
	.uleb128 .LVU381
	.uleb128 0
.LLST12:
	.4byte	.LVL6
	.4byte	.LVL7
	.2byte	0x2
	.byte	0x30
	.byte	0x9f
	.4byte	.LVL11
	.4byte	.LVL13
	.2byte	0x2
	.byte	0x30
	.byte	0x9f
	.4byte	.LVL14
	.4byte	.LVL17
	.2byte	0x2
	.byte	0x31
	.byte	0x9f
	.4byte	.LVL17
	.4byte	.LVL25
	.2byte	0x3
	.byte	0x91
	.sleb128 -176
	.4byte	.LVL25
	.4byte	.LVL30
	.2byte	0x2
	.byte	0x30
	.byte	0x9f
	.4byte	.LVL31
	.4byte	.LVL33
	.2byte	0x2
	.byte	0x31
	.byte	0x9f
	.4byte	.LVL33
	.4byte	.LVL35
	.2byte	0x3
	.byte	0x91
	.sleb128 -176
	.4byte	.LVL35
	.4byte	.LVL38
	.2byte	0x2
	.byte	0x30
	.byte	0x9f
	.4byte	.LVL40
	.4byte	.LVL43
	.2byte	0x2
	.byte	0x31
	.byte	0x9f
	.4byte	.LVL43
	.4byte	.LVL49
	.2byte	0x3
	.byte	0x91
	.sleb128 -176
	.4byte	.LVL49
	.4byte	.LVL50
	.2byte	0x2
	.byte	0x30
	.byte	0x9f
	.4byte	.LVL51
	.4byte	.LVL53
	.2byte	0x3
	.byte	0x91
	.sleb128 -176
	.4byte	.LVL55
	.4byte	.LVL61
	.2byte	0x3
	.byte	0x91
	.sleb128 -176
	.4byte	.LVL61
	.4byte	.LVL62
	.2byte	0x1
	.byte	0x53
	.4byte	.LVL62
	.4byte	.LVL72
	.2byte	0x3
	.byte	0x91
	.sleb128 -176
	.4byte	.LVL72
	.4byte	.LVL73
	.2byte	0x1
	.byte	0x53
	.4byte	.LVL73
	.4byte	.LVL74
	.2byte	0x3
	.byte	0x91
	.sleb128 -176
	.4byte	.LVL74
	.4byte	.LVL75
	.2byte	0x1
	.byte	0x53
	.4byte	.LVL75
	.4byte	.LVL78
	.2byte	0x3
	.byte	0x91
	.sleb128 -176
	.4byte	.LVL78
	.4byte	.LVL79
	.2byte	0x1
	.byte	0x53
	.4byte	.LVL79
	.4byte	.LVL80
	.2byte	0x3
	.byte	0x91
	.sleb128 -176
	.4byte	.LVL80
	.4byte	.LVL81
	.2byte	0x1
	.byte	0x53
	.4byte	.LVL81
	.4byte	.LVL82
	.2byte	0x3
	.byte	0x91
	.sleb128 -176
	.4byte	.LVL82
	.4byte	.LVL85
	.2byte	0x1
	.byte	0x53
	.4byte	.LVL85
	.4byte	.LFE0
	.2byte	0x3
	.byte	0x91
	.sleb128 -176
	.4byte	0
	.4byte	0
.LVUS13:
	.uleb128 .LVU29
	.uleb128 .LVU47
	.uleb128 .LVU59
	.uleb128 .LVU79
	.uleb128 .LVU79
	.uleb128 .LVU126
	.uleb128 .LVU126
	.uleb128 .LVU150
	.uleb128 .LVU150
	.uleb128 .LVU167
	.uleb128 .LVU167
	.uleb128 .LVU192
	.uleb128 .LVU192
	.uleb128 .LVU199
	.uleb128 .LVU199
	.uleb128 .LVU213
	.uleb128 .LVU213
	.uleb128 .LVU263
	.uleb128 .LVU263
	.uleb128 .LVU270
	.uleb128 .LVU270
	.uleb128 0
.LLST13:
	.4byte	.LVL6
	.4byte	.LVL7
	.2byte	0x2
	.byte	0x30
	.byte	0x9f
	.4byte	.LVL11
	.4byte	.LVL13
	.2byte	0x2
	.byte	0x30
	.byte	0x9f
	.4byte	.LVL13
	.4byte	.LVL25
	.2byte	0x1
	.byte	0x58
	.4byte	.LVL25
	.4byte	.LVL26
	.2byte	0x2
	.byte	0x30
	.byte	0x9f
	.4byte	.LVL26
	.4byte	.LVL30
	.2byte	0x2
	.byte	0x31
	.byte	0x9f
	.4byte	.LVL30
	.4byte	.LVL35
	.2byte	0x1
	.byte	0x58
	.4byte	.LVL35
	.4byte	.LVL35
	.2byte	0x2
	.byte	0x30
	.byte	0x9f
	.4byte	.LVL35
	.4byte	.LVL38
	.2byte	0x2
	.byte	0x31
	.byte	0x9f
	.4byte	.LVL38
	.4byte	.LVL49
	.2byte	0x1
	.byte	0x58
	.4byte	.LVL49
	.4byte	.LVL50
	.2byte	0x2
	.byte	0x30
	.byte	0x9f
	.4byte	.LVL50
	.4byte	.LFE0
	.2byte	0x1
	.byte	0x58
	.4byte	0
	.4byte	0
.LVUS14:
	.uleb128 .LVU31
	.uleb128 .LVU47
	.uleb128 .LVU59
	.uleb128 .LVU60
	.uleb128 .LVU60
	.uleb128 .LVU79
	.uleb128 .LVU126
	.uleb128 .LVU167
	.uleb128 .LVU192
	.uleb128 .LVU213
	.uleb128 .LVU263
	.uleb128 .LVU270
.LLST14:
	.4byte	.LVL6
	.4byte	.LVL7
	.2byte	0x2
	.byte	0x30
	.byte	0x9f
	.4byte	.LVL11
	.4byte	.LVL12
	.2byte	0x2
	.byte	0x30
	.byte	0x9f
	.4byte	.LVL12
	.4byte	.LVL13
	.2byte	0x2
	.byte	0x31
	.byte	0x9f
	.4byte	.LVL25
	.4byte	.LVL30
	.2byte	0x2
	.byte	0x32
	.byte	0x9f
	.4byte	.LVL35
	.4byte	.LVL38
	.2byte	0x2
	.byte	0x31
	.byte	0x9f
	.4byte	.LVL49
	.4byte	.LVL50
	.2byte	0x2
	.byte	0x32
	.byte	0x9f
	.4byte	0
	.4byte	0
.LVUS15:
	.uleb128 .LVU33
	.uleb128 .LVU47
	.uleb128 .LVU59
	.uleb128 .LVU79
	.uleb128 .LVU126
	.uleb128 .LVU141
	.uleb128 .LVU141
	.uleb128 .LVU167
	.uleb128 .LVU192
	.uleb128 .LVU213
	.uleb128 .LVU263
	.uleb128 .LVU270
.LLST15:
	.4byte	.LVL6
	.4byte	.LVL7
	.2byte	0x2
	.byte	0x30
	.byte	0x9f
	.4byte	.LVL11
	.4byte	.LVL13
	.2byte	0x2
	.byte	0x30
	.byte	0x9f
	.4byte	.LVL25
	.4byte	.LVL26
	.2byte	0x2
	.byte	0x30
	.byte	0x9f
	.4byte	.LVL26
	.4byte	.LVL30
	.2byte	0x2
	.byte	0x31
	.byte	0x9f
	.4byte	.LVL35
	.4byte	.LVL38
	.2byte	0x2
	.byte	0x31
	.byte	0x9f
	.4byte	.LVL49
	.4byte	.LVL50
	.2byte	0x2
	.byte	0x30
	.byte	0x9f
	.4byte	0
	.4byte	0
.LVUS16:
	.uleb128 .LVU39
	.uleb128 .LVU47
	.uleb128 .LVU59
	.uleb128 .LVU79
	.uleb128 .LVU85
	.uleb128 .LVU101
	.uleb128 .LVU101
	.uleb128 .LVU126
	.uleb128 .LVU126
	.uleb128 .LVU167
	.uleb128 .LVU167
	.uleb128 .LVU192
	.uleb128 .LVU192
	.uleb128 .LVU213
	.uleb128 .LVU224
	.uleb128 .LVU240
	.uleb128 .LVU240
	.uleb128 .LVU263
	.uleb128 .LVU263
	.uleb128 .LVU270
	.uleb128 .LVU270
	.uleb128 .LVU282
	.uleb128 .LVU287
	.uleb128 0
.LLST16:
	.4byte	.LVL6
	.4byte	.LVL7
	.2byte	0x2
	.byte	0x30
	.byte	0x9f
	.4byte	.LVL11
	.4byte	.LVL13
	.2byte	0x2
	.byte	0x30
	.byte	0x9f
	.4byte	.LVL14
	.4byte	.LVL17
	.2byte	0x2
	.byte	0x30
	.byte	0x9f
	.4byte	.LVL17
	.4byte	.LVL25
	.2byte	0x1
	.byte	0x5b
	.4byte	.LVL25
	.4byte	.LVL30
	.2byte	0x2
	.byte	0x30
	.byte	0x9f
	.4byte	.LVL30
	.4byte	.LVL35
	.2byte	0x1
	.byte	0x5b
	.4byte	.LVL35
	.4byte	.LVL38
	.2byte	0x2
	.byte	0x30
	.byte	0x9f
	.4byte	.LVL40
	.4byte	.LVL43
	.2byte	0x2
	.byte	0x30
	.byte	0x9f
	.4byte	.LVL43
	.4byte	.LVL49
	.2byte	0x1
	.byte	0x5b
	.4byte	.LVL49
	.4byte	.LVL50
	.2byte	0x2
	.byte	0x30
	.byte	0x9f
	.4byte	.LVL50
	.4byte	.LVL53
	.2byte	0x1
	.byte	0x5b
	.4byte	.LVL54
	.4byte	.LFE0
	.2byte	0x1
	.byte	0x5b
	.4byte	0
	.4byte	0
.LVUS17:
	.uleb128 .LVU41
	.uleb128 .LVU47
	.uleb128 .LVU59
	.uleb128 .LVU79
	.uleb128 .LVU79
	.uleb128 .LVU126
	.uleb128 .LVU126
	.uleb128 .LVU167
	.uleb128 .LVU167
	.uleb128 .LVU192
	.uleb128 .LVU192
	.uleb128 .LVU213
	.uleb128 .LVU213
	.uleb128 .LVU263
	.uleb128 .LVU263
	.uleb128 .LVU270
	.uleb128 .LVU270
	.uleb128 0
.LLST17:
	.4byte	.LVL6
	.4byte	.LVL7
	.2byte	0x2
	.byte	0x30
	.byte	0x9f
	.4byte	.LVL11
	.4byte	.LVL13
	.2byte	0x2
	.byte	0x30
	.byte	0x9f
	.4byte	.LVL13
	.4byte	.LVL25
	.2byte	0x1
	.byte	0x59
	.4byte	.LVL25
	.4byte	.LVL30
	.2byte	0x2
	.byte	0x30
	.byte	0x9f
	.4byte	.LVL30
	.4byte	.LVL35
	.2byte	0x1
	.byte	0x59
	.4byte	.LVL35
	.4byte	.LVL38
	.2byte	0x2
	.byte	0x30
	.byte	0x9f
	.4byte	.LVL38
	.4byte	.LVL49
	.2byte	0x1
	.byte	0x59
	.4byte	.LVL49
	.4byte	.LVL50
	.2byte	0x2
	.byte	0x30
	.byte	0x9f
	.4byte	.LVL50
	.4byte	.LFE0
	.2byte	0x1
	.byte	0x59
	.4byte	0
	.4byte	0
.LVUS30:
	.uleb128 .LVU79
	.uleb128 .LVU126
	.uleb128 .LVU167
	.uleb128 .LVU192
	.uleb128 .LVU201
	.uleb128 .LVU253
	.uleb128 .LVU253
	.uleb128 .LVU263
	.uleb128 .LVU270
	.uleb128 .LVU282
	.uleb128 .LVU282
	.uleb128 .LVU287
	.uleb128 .LVU287
	.uleb128 .LVU372
	.uleb128 .LVU372
	.uleb128 0
.LLST30:
	.4byte	.LVL13
	.4byte	.LVL25
	.2byte	0x3
	.byte	0x91
	.sleb128 -132
	.4byte	.LVL30
	.4byte	.LVL35
	.2byte	0x3
	.byte	0x91
	.sleb128 -132
	.4byte	.LVL35
	.4byte	.LVL45
	.2byte	0x2
	.byte	0x91
	.sleb128 -4
	.4byte	.LVL45
	.4byte	.LVL49
	.2byte	0x3
	.byte	0x91
	.sleb128 -132
	.4byte	.LVL50
	.4byte	.LVL53
	.2byte	0x3
	.byte	0x91
	.sleb128 -132
	.4byte	.LVL53
	.4byte	.LVL54
	.2byte	0x1
	.byte	0x53
	.4byte	.LVL54
	.4byte	.LVL84
	.2byte	0x3
	.byte	0x91
	.sleb128 -132
	.4byte	.LVL84
	.4byte	.LFE0
	.2byte	0x2
	.byte	0x91
	.sleb128 -4
	.4byte	0
	.4byte	0
.LVUS31:
	.uleb128 .LVU79
	.uleb128 .LVU126
	.uleb128 .LVU167
	.uleb128 .LVU192
	.uleb128 .LVU208
	.uleb128 .LVU213
	.uleb128 .LVU213
	.uleb128 .LVU216
	.uleb128 .LVU216
	.uleb128 .LVU263
	.uleb128 .LVU270
	.uleb128 0
.LLST31:
	.4byte	.LVL13
	.4byte	.LVL25
	.2byte	0x2
	.byte	0x90
	.uleb128 0x56
	.4byte	.LVL30
	.4byte	.LVL35
	.2byte	0x2
	.byte	0x90
	.uleb128 0x56
	.4byte	.LVL37
	.4byte	.LVL38
	.2byte	0x2
	.byte	0x90
	.uleb128 0x56
	.4byte	.LVL38
	.4byte	.LVL39
	.2byte	0x1
	.byte	0x53
	.4byte	.LVL39
	.4byte	.LVL49
	.2byte	0x2
	.byte	0x90
	.uleb128 0x56
	.4byte	.LVL50
	.4byte	.LFE0
	.2byte	0x2
	.byte	0x90
	.uleb128 0x56
	.4byte	0
	.4byte	0
.LVUS32:
	.uleb128 .LVU79
	.uleb128 .LVU126
	.uleb128 .LVU167
	.uleb128 .LVU192
	.uleb128 .LVU212
	.uleb128 .LVU263
	.uleb128 .LVU270
	.uleb128 0
.LLST32:
	.4byte	.LVL13
	.4byte	.LVL25
	.2byte	0x1
	.byte	0x5a
	.4byte	.LVL30
	.4byte	.LVL35
	.2byte	0x1
	.byte	0x5a
	.4byte	.LVL38
	.4byte	.LVL49
	.2byte	0x1
	.byte	0x5a
	.4byte	.LVL50
	.4byte	.LFE0
	.2byte	0x1
	.byte	0x5a
	.4byte	0
	.4byte	0
.LVUS33:
	.uleb128 .LVU79
	.uleb128 .LVU126
	.uleb128 .LVU167
	.uleb128 .LVU192
	.uleb128 .LVU227
	.uleb128 .LVU240
	.uleb128 .LVU240
	.uleb128 .LVU263
	.uleb128 .LVU270
	.uleb128 .LVU282
	.uleb128 .LVU287
	.uleb128 .LVU372
	.uleb128 .LVU372
	.uleb128 0
.LLST33:
	.4byte	.LVL13
	.4byte	.LVL25
	.2byte	0x3
	.byte	0x91
	.sleb128 -168
	.4byte	.LVL30
	.4byte	.LVL35
	.2byte	0x3
	.byte	0x91
	.sleb128 -168
	.4byte	.LVL40
	.4byte	.LVL43
	.2byte	0x2
	.byte	0x91
	.sleb128 -8
	.4byte	.LVL43
	.4byte	.LVL49
	.2byte	0x3
	.byte	0x91
	.sleb128 -168
	.4byte	.LVL50
	.4byte	.LVL53
	.2byte	0x3
	.byte	0x91
	.sleb128 -168
	.4byte	.LVL54
	.4byte	.LVL84
	.2byte	0x3
	.byte	0x91
	.sleb128 -168
	.4byte	.LVL84
	.4byte	.LFE0
	.2byte	0x1
	.byte	0x52
	.4byte	0
	.4byte	0
.LVUS34:
	.uleb128 .LVU79
	.uleb128 .LVU126
	.uleb128 .LVU167
	.uleb128 .LVU192
	.uleb128 .LVU231
	.uleb128 .LVU263
	.uleb128 .LVU270
	.uleb128 .LVU282
	.uleb128 .LVU287
	.uleb128 0
.LLST34:
	.4byte	.LVL13
	.4byte	.LVL25
	.2byte	0x2
	.byte	0x90
	.uleb128 0x5c
	.4byte	.LVL30
	.4byte	.LVL35
	.2byte	0x2
	.byte	0x90
	.uleb128 0x5c
	.4byte	.LVL42
	.4byte	.LVL49
	.2byte	0x2
	.byte	0x90
	.uleb128 0x5c
	.4byte	.LVL50
	.4byte	.LVL53
	.2byte	0x2
	.byte	0x90
	.uleb128 0x5c
	.4byte	.LVL54
	.4byte	.LFE0
	.2byte	0x2
	.byte	0x90
	.uleb128 0x5c
	.4byte	0
	.4byte	0
.LVUS35:
	.uleb128 .LVU79
	.uleb128 .LVU126
	.uleb128 .LVU167
	.uleb128 .LVU192
	.uleb128 .LVU239
	.uleb128 .LVU240
	.uleb128 .LVU240
	.uleb128 .LVU263
	.uleb128 .LVU270
	.uleb128 .LVU282
	.uleb128 .LVU287
	.uleb128 0
.LLST35:
	.4byte	.LVL13
	.4byte	.LVL25
	.2byte	0x3
	.byte	0x91
	.sleb128 -164
	.4byte	.LVL30
	.4byte	.LVL35
	.2byte	0x3
	.byte	0x91
	.sleb128 -164
	.4byte	.LVL43
	.4byte	.LVL43
	.2byte	0x1
	.byte	0x53
	.4byte	.LVL43
	.4byte	.LVL49
	.2byte	0x3
	.byte	0x91
	.sleb128 -164
	.4byte	.LVL50
	.4byte	.LVL53
	.2byte	0x3
	.byte	0x91
	.sleb128 -164
	.4byte	.LVL54
	.4byte	.LFE0
	.2byte	0x3
	.byte	0x91
	.sleb128 -164
	.4byte	0
	.4byte	0
.LVUS36:
	.uleb128 .LVU256
	.uleb128 .LVU260
.LLST36:
	.4byte	.LVL46
	.4byte	.LVL47
	.2byte	0x1
	.byte	0x50
	.4byte	0
	.4byte	0
.LVUS37:
	.uleb128 .LVU261
	.uleb128 .LVU263
.LLST37:
	.4byte	.LVL48
	.4byte	.LVL49
	.2byte	0x1
	.byte	0x50
	.4byte	0
	.4byte	0
.LVUS24:
	.uleb128 .LVU114
	.uleb128 .LVU126
	.uleb128 .LVU167
	.uleb128 .LVU192
	.uleb128 .LVU213
	.uleb128 .LVU263
	.uleb128 .LVU270
	.uleb128 .LVU362
	.uleb128 .LVU372
	.uleb128 0
.LLST24:
	.4byte	.LVL19
	.4byte	.LVL25
	.2byte	0x3
	.byte	0x91
	.sleb128 -128
	.4byte	.LVL30
	.4byte	.LVL35
	.2byte	0x3
	.byte	0x91
	.sleb128 -128
	.4byte	.LVL38
	.4byte	.LVL49
	.2byte	0x3
	.byte	0x91
	.sleb128 -128
	.4byte	.LVL50
	.4byte	.LVL82
	.2byte	0x3
	.byte	0x91
	.sleb128 -128
	.4byte	.LVL84
	.4byte	.LFE0
	.2byte	0x3
	.byte	0x91
	.sleb128 -128
	.4byte	0
	.4byte	0
.LVUS25:
	.uleb128 .LVU88
	.uleb128 .LVU101
	.uleb128 .LVU101
	.uleb128 .LVU126
	.uleb128 .LVU167
	.uleb128 .LVU192
	.uleb128 .LVU213
	.uleb128 .LVU263
	.uleb128 .LVU270
	.uleb128 .LVU362
	.uleb128 .LVU362
	.uleb128 .LVU372
	.uleb128 .LVU372
	.uleb128 0
.LLST25:
	.4byte	.LVL14
	.4byte	.LVL17
	.2byte	0x2
	.byte	0x91
	.sleb128 -8
	.4byte	.LVL17
	.4byte	.LVL25
	.2byte	0x3
	.byte	0x91
	.sleb128 -156
	.4byte	.LVL30
	.4byte	.LVL35
	.2byte	0x3
	.byte	0x91
	.sleb128 -156
	.4byte	.LVL38
	.4byte	.LVL49
	.2byte	0x3
	.byte	0x91
	.sleb128 -156
	.4byte	.LVL50
	.4byte	.LVL82
	.2byte	0x3
	.byte	0x91
	.sleb128 -156
	.4byte	.LVL82
	.4byte	.LVL84
	.2byte	0x1
	.byte	0x52
	.4byte	.LVL84
	.4byte	.LFE0
	.2byte	0x3
	.byte	0x91
	.sleb128 -156
	.4byte	0
	.4byte	0
.LVUS26:
	.uleb128 .LVU94
	.uleb128 .LVU126
	.uleb128 .LVU167
	.uleb128 .LVU192
	.uleb128 .LVU213
	.uleb128 .LVU263
	.uleb128 .LVU270
	.uleb128 0
.LLST26:
	.4byte	.LVL16
	.4byte	.LVL25
	.2byte	0x2
	.byte	0x90
	.uleb128 0x5d
	.4byte	.LVL30
	.4byte	.LVL35
	.2byte	0x2
	.byte	0x90
	.uleb128 0x5d
	.4byte	.LVL38
	.4byte	.LVL49
	.2byte	0x2
	.byte	0x90
	.uleb128 0x5d
	.4byte	.LVL50
	.4byte	.LFE0
	.2byte	0x2
	.byte	0x90
	.uleb128 0x5d
	.4byte	0
	.4byte	0
.LVUS27:
	.uleb128 .LVU100
	.uleb128 .LVU101
	.uleb128 .LVU101
	.uleb128 .LVU126
	.uleb128 .LVU167
	.uleb128 .LVU192
	.uleb128 .LVU213
	.uleb128 .LVU263
	.uleb128 .LVU270
	.uleb128 0
.LLST27:
	.4byte	.LVL17
	.4byte	.LVL17
	.2byte	0x1
	.byte	0x53
	.4byte	.LVL17
	.4byte	.LVL25
	.2byte	0x3
	.byte	0x91
	.sleb128 -152
	.4byte	.LVL30
	.4byte	.LVL35
	.2byte	0x3
	.byte	0x91
	.sleb128 -152
	.4byte	.LVL38
	.4byte	.LVL49
	.2byte	0x3
	.byte	0x91
	.sleb128 -152
	.4byte	.LVL50
	.4byte	.LFE0
	.2byte	0x3
	.byte	0x91
	.sleb128 -152
	.4byte	0
	.4byte	0
.LVUS28:
	.uleb128 .LVU119
	.uleb128 .LVU123
.LLST28:
	.4byte	.LVL22
	.4byte	.LVL23
	.2byte	0x1
	.byte	0x50
	.4byte	0
	.4byte	0
.LVUS29:
	.uleb128 .LVU124
	.uleb128 .LVU126
.LLST29:
	.4byte	.LVL24
	.4byte	.LVL25
	.2byte	0x1
	.byte	0x50
	.4byte	0
	.4byte	0
.LVUS38:
	.uleb128 .LVU79
	.uleb128 .LVU126
	.uleb128 .LVU167
	.uleb128 .LVU192
	.uleb128 .LVU213
	.uleb128 .LVU263
	.uleb128 .LVU282
	.uleb128 .LVU305
	.uleb128 .LVU307
	.uleb128 0
.LLST38:
	.4byte	.LVL13
	.4byte	.LVL25
	.2byte	0x3
	.byte	0x91
	.sleb128 -124
	.4byte	.LVL30
	.4byte	.LVL35
	.2byte	0x3
	.byte	0x91
	.sleb128 -124
	.4byte	.LVL38
	.4byte	.LVL49
	.2byte	0x3
	.byte	0x91
	.sleb128 -124
	.4byte	.LVL53
	.4byte	.LVL61
	.2byte	0x3
	.byte	0x91
	.sleb128 -124
	.4byte	.LVL63
	.4byte	.LFE0
	.2byte	0x3
	.byte	0x91
	.sleb128 -124
	.4byte	0
	.4byte	0
.LVUS39:
	.uleb128 .LVU79
	.uleb128 .LVU126
	.uleb128 .LVU167
	.uleb128 .LVU192
	.uleb128 .LVU213
	.uleb128 .LVU263
	.uleb128 .LVU274
	.uleb128 .LVU305
	.uleb128 .LVU305
	.uleb128 .LVU307
	.uleb128 .LVU307
	.uleb128 0
.LLST39:
	.4byte	.LVL13
	.4byte	.LVL25
	.2byte	0x3
	.byte	0x91
	.sleb128 -136
	.4byte	.LVL30
	.4byte	.LVL35
	.2byte	0x3
	.byte	0x91
	.sleb128 -136
	.4byte	.LVL38
	.4byte	.LVL49
	.2byte	0x3
	.byte	0x91
	.sleb128 -136
	.4byte	.LVL51
	.4byte	.LVL61
	.2byte	0x3
	.byte	0x91
	.sleb128 -136
	.4byte	.LVL61
	.4byte	.LVL63
	.2byte	0x1
	.byte	0x52
	.4byte	.LVL63
	.4byte	.LFE0
	.2byte	0x3
	.byte	0x91
	.sleb128 -136
	.4byte	0
	.4byte	0
.LVUS40:
	.uleb128 .LVU327
	.uleb128 .LVU331
.LLST40:
	.4byte	.LVL68
	.4byte	.LVL69
	.2byte	0x1
	.byte	0x50
	.4byte	0
	.4byte	0
.LVUS41:
	.uleb128 .LVU332
	.uleb128 .LVU334
.LLST41:
	.4byte	.LVL70
	.4byte	.LVL71
	.2byte	0x1
	.byte	0x50
	.4byte	0
	.4byte	0
.LVUS18:
	.uleb128 .LVU79
	.uleb128 .LVU114
	.uleb128 .LVU114
	.uleb128 .LVU126
	.uleb128 .LVU152
	.uleb128 .LVU159
	.uleb128 .LVU159
	.uleb128 .LVU192
	.uleb128 .LVU213
	.uleb128 .LVU253
	.uleb128 .LVU253
	.uleb128 .LVU263
	.uleb128 .LVU270
	.uleb128 .LVU287
	.uleb128 .LVU287
	.uleb128 .LVU292
	.uleb128 .LVU292
	.uleb128 .LVU305
	.uleb128 .LVU305
	.uleb128 .LVU307
	.uleb128 .LVU307
	.uleb128 .LVU348
	.uleb128 .LVU348
	.uleb128 .LVU349
	.uleb128 .LVU349
	.uleb128 .LVU362
	.uleb128 .LVU362
	.uleb128 0
.LLST18:
	.4byte	.LVL13
	.4byte	.LVL19
	.2byte	0x3
	.byte	0x91
	.sleb128 -144
	.4byte	.LVL19
	.4byte	.LVL25
	.2byte	0x2
	.byte	0x91
	.sleb128 -4
	.4byte	.LVL26
	.4byte	.LVL27-1
	.2byte	0x1
	.byte	0x52
	.4byte	.LVL27-1
	.4byte	.LVL35
	.2byte	0x2
	.byte	0x91
	.sleb128 -4
	.4byte	.LVL38
	.4byte	.LVL45
	.2byte	0x3
	.byte	0x91
	.sleb128 -144
	.4byte	.LVL45
	.4byte	.LVL49
	.2byte	0x2
	.byte	0x91
	.sleb128 -4
	.4byte	.LVL50
	.4byte	.LVL54
	.2byte	0x3
	.byte	0x91
	.sleb128 -144
	.4byte	.LVL54
	.4byte	.LVL55
	.2byte	0x1
	.byte	0x53
	.4byte	.LVL55
	.4byte	.LVL61
	.2byte	0x2
	.byte	0x91
	.sleb128 -4
	.4byte	.LVL61
	.4byte	.LVL63
	.2byte	0x3
	.byte	0x91
	.sleb128 -144
	.4byte	.LVL63
	.4byte	.LVL76
	.2byte	0x2
	.byte	0x91
	.sleb128 -4
	.4byte	.LVL76
	.4byte	.LVL77
	.2byte	0x3
	.byte	0x91
	.sleb128 -144
	.4byte	.LVL77
	.4byte	.LVL82
	.2byte	0x2
	.byte	0x91
	.sleb128 -4
	.4byte	.LVL82
	.4byte	.LFE0
	.2byte	0x3
	.byte	0x91
	.sleb128 -144
	.4byte	0
	.4byte	0
.LVUS19:
	.uleb128 .LVU79
	.uleb128 .LVU126
	.uleb128 .LVU162
	.uleb128 .LVU165
	.uleb128 .LVU165
	.uleb128 .LVU167
	.uleb128 .LVU167
	.uleb128 .LVU192
	.uleb128 .LVU213
	.uleb128 .LVU263
	.uleb128 .LVU270
	.uleb128 0
.LLST19:
	.4byte	.LVL13
	.4byte	.LVL25
	.2byte	0x3
	.byte	0x91
	.sleb128 -160
	.4byte	.LVL28
	.4byte	.LVL29
	.2byte	0x1
	.byte	0x53
	.4byte	.LVL29
	.4byte	.LVL30
	.2byte	0x2
	.byte	0x90
	.uleb128 0x4f
	.4byte	.LVL30
	.4byte	.LVL35
	.2byte	0x3
	.byte	0x91
	.sleb128 -160
	.4byte	.LVL38
	.4byte	.LVL49
	.2byte	0x3
	.byte	0x91
	.sleb128 -160
	.4byte	.LVL50
	.4byte	.LFE0
	.2byte	0x3
	.byte	0x91
	.sleb128 -160
	.4byte	0
	.4byte	0
.LVUS20:
	.uleb128 .LVU79
	.uleb128 .LVU126
	.uleb128 .LVU166
	.uleb128 .LVU167
	.uleb128 .LVU167
	.uleb128 .LVU192
	.uleb128 .LVU213
	.uleb128 .LVU263
	.uleb128 .LVU270
	.uleb128 0
.LLST20:
	.4byte	.LVL13
	.4byte	.LVL25
	.2byte	0x3
	.byte	0x91
	.sleb128 -172
	.4byte	.LVL30
	.4byte	.LVL30
	.2byte	0x1
	.byte	0x53
	.4byte	.LVL30
	.4byte	.LVL35
	.2byte	0x3
	.byte	0x91
	.sleb128 -172
	.4byte	.LVL38
	.4byte	.LVL49
	.2byte	0x3
	.byte	0x91
	.sleb128 -172
	.4byte	.LVL50
	.4byte	.LFE0
	.2byte	0x3
	.byte	0x91
	.sleb128 -172
	.4byte	0
	.4byte	0
.LVUS21:
	.uleb128 .LVU79
	.uleb128 .LVU126
	.uleb128 .LVU181
	.uleb128 .LVU183
	.uleb128 .LVU183
	.uleb128 .LVU184
	.uleb128 .LVU184
	.uleb128 .LVU192
	.uleb128 .LVU213
	.uleb128 .LVU263
	.uleb128 .LVU270
	.uleb128 .LVU287
	.uleb128 .LVU292
	.uleb128 0
.LLST21:
	.4byte	.LVL13
	.4byte	.LVL25
	.2byte	0x3
	.byte	0x91
	.sleb128 -148
	.4byte	.LVL31
	.4byte	.LVL32
	.2byte	0x1
	.byte	0x53
	.4byte	.LVL32
	.4byte	.LVL33
	.2byte	0x2
	.byte	0x91
	.sleb128 0
	.4byte	.LVL33
	.4byte	.LVL35
	.2byte	0x3
	.byte	0x91
	.sleb128 -148
	.4byte	.LVL38
	.4byte	.LVL49
	.2byte	0x3
	.byte	0x91
	.sleb128 -148
	.4byte	.LVL50
	.4byte	.LVL54
	.2byte	0x3
	.byte	0x91
	.sleb128 -148
	.4byte	.LVL55
	.4byte	.LFE0
	.2byte	0x3
	.byte	0x91
	.sleb128 -148
	.4byte	0
	.4byte	0
.LVUS22:
	.uleb128 .LVU298
	.uleb128 .LVU302
.LLST22:
	.4byte	.LVL58
	.4byte	.LVL59
	.2byte	0x1
	.byte	0x50
	.4byte	0
	.4byte	0
.LVUS23:
	.uleb128 .LVU303
	.uleb128 .LVU305
.LLST23:
	.4byte	.LVL60
	.4byte	.LVL61
	.2byte	0x1
	.byte	0x50
	.4byte	0
	.4byte	0
	.section	.debug_aranges,"",%progbits
	.4byte	0x24
	.2byte	0x2
	.4byte	.Ldebug_info0
	.byte	0x4
	.byte	0
	.2byte	0
	.2byte	0
	.4byte	.Ltext0
	.4byte	.Letext0-.Ltext0
	.4byte	.LFB1
	.4byte	.LFE1-.LFB1
	.4byte	0
	.4byte	0
	.section	.debug_ranges,"",%progbits
.Ldebug_ranges0:
	.4byte	.LBB2
	.4byte	.LBE2
	.4byte	.LBB17
	.4byte	.LBE17
	.4byte	.LBB18
	.4byte	.LBE18
	.4byte	.LBB36
	.4byte	.LBE36
	.4byte	.LBB40
	.4byte	.LBE40
	.4byte	0
	.4byte	0
	.4byte	.LBB3
	.4byte	.LBE3
	.4byte	.LBB6
	.4byte	.LBE6
	.4byte	.LBB7
	.4byte	.LBE7
	.4byte	.LBB8
	.4byte	.LBE8
	.4byte	0
	.4byte	0
	.4byte	.LBB4
	.4byte	.LBE4
	.4byte	.LBB5
	.4byte	.LBE5
	.4byte	0
	.4byte	0
	.4byte	.LBB9
	.4byte	.LBE9
	.4byte	.LBB16
	.4byte	.LBE16
	.4byte	.LBB38
	.4byte	.LBE38
	.4byte	.LBB42
	.4byte	.LBE42
	.4byte	0
	.4byte	0
	.4byte	.LBB10
	.4byte	.LBE10
	.4byte	.LBB13
	.4byte	.LBE13
	.4byte	.LBB14
	.4byte	.LBE14
	.4byte	.LBB15
	.4byte	.LBE15
	.4byte	0
	.4byte	0
	.4byte	.LBB11
	.4byte	.LBE11
	.4byte	.LBB12
	.4byte	.LBE12
	.4byte	0
	.4byte	0
	.4byte	.LBB19
	.4byte	.LBE19
	.4byte	.LBB27
	.4byte	.LBE27
	.4byte	.LBB35
	.4byte	.LBE35
	.4byte	.LBB39
	.4byte	.LBE39
	.4byte	.LBB43
	.4byte	.LBE43
	.4byte	0
	.4byte	0
	.4byte	.LBB20
	.4byte	.LBE20
	.4byte	.LBB23
	.4byte	.LBE23
	.4byte	.LBB24
	.4byte	.LBE24
	.4byte	.LBB25
	.4byte	.LBE25
	.4byte	.LBB26
	.4byte	.LBE26
	.4byte	0
	.4byte	0
	.4byte	.LBB21
	.4byte	.LBE21
	.4byte	.LBB22
	.4byte	.LBE22
	.4byte	0
	.4byte	0
	.4byte	.LBB28
	.4byte	.LBE28
	.4byte	.LBB34
	.4byte	.LBE34
	.4byte	.LBB37
	.4byte	.LBE37
	.4byte	.LBB41
	.4byte	.LBE41
	.4byte	0
	.4byte	0
	.4byte	.LBB29
	.4byte	.LBE29
	.4byte	.LBB32
	.4byte	.LBE32
	.4byte	.LBB33
	.4byte	.LBE33
	.4byte	0
	.4byte	0
	.4byte	.LBB30
	.4byte	.LBE30
	.4byte	.LBB31
	.4byte	.LBE31
	.4byte	0
	.4byte	0
	.4byte	.Ltext0
	.4byte	.Letext0
	.4byte	.LFB1
	.4byte	.LFE1
	.4byte	0
	.4byte	0
	.section	.debug_line,"",%progbits
.Ldebug_line0:
	.section	.debug_str,"MS",%progbits,1
.LASF92:
	.ascii	"label$59\000"
.LASF122:
	.ascii	"TMP$21$6\000"
.LASF57:
	.ascii	"label$20\000"
.LASF52:
	.ascii	"label$21\000"
.LASF20:
	.ascii	"PX$1\000"
.LASF54:
	.ascii	"label$23\000"
.LASF56:
	.ascii	"label$24\000"
.LASF59:
	.ascii	"label$25\000"
.LASF62:
	.ascii	"label$26\000"
.LASF63:
	.ascii	"label$27\000"
.LASF23:
	.ascii	"TAILLE_X$1\000"
.LASF73:
	.ascii	"label$29\000"
.LASF111:
	.ascii	"TMP$12$6\000"
.LASF114:
	.ascii	"vr$63\000"
.LASF33:
	.ascii	"BOUCLE_X$1\000"
.LASF26:
	.ascii	"TMP$23$1\000"
.LASF93:
	.ascii	"label$60\000"
.LASF94:
	.ascii	"label$61\000"
.LASF98:
	.ascii	"label$62\000"
.LASF4:
	.ascii	"short int\000"
.LASF119:
	.ascii	"TMP$18$4\000"
.LASF107:
	.ascii	"vr$33\000"
.LASF121:
	.ascii	"TMP$20$4\000"
.LASF108:
	.ascii	"vr$36\000"
.LASF133:
	.ascii	"GNU C17 10.2.1 20210110 -mfloat-abi=hard -mfpu=vfp "
	.ascii	"-mtls-dialect=gnu -marm -march=armv7-a+fp -g -O3 -f"
	.ascii	"no-strict-aliasing -frounding-math -fno-math-errno "
	.ascii	"-fwrapv -fno-exceptions -fno-unwind-tables -fno-asy"
	.ascii	"nchronous-unwind-tables\000"
.LASF110:
	.ascii	"TMP$11$6\000"
.LASF127:
	.ascii	"fb_GfxPut\000"
.LASF36:
	.ascii	"ACTION_Y$1\000"
.LASF116:
	.ascii	"TMP$16$6\000"
.LASF13:
	.ascii	"TMP$28$0\000"
.LASF0:
	.ascii	"double\000"
.LASF131:
	.ascii	"__builtin_nearbyintf\000"
.LASF130:
	.ascii	"nearbyint\000"
.LASF126:
	.ascii	"fb_ErrorSetFuncName\000"
.LASF103:
	.ascii	"TMP$4$4\000"
.LASF6:
	.ascii	"uint8\000"
.LASF86:
	.ascii	"label$43\000"
.LASF35:
	.ascii	"ACTION_X$1\000"
.LASF65:
	.ascii	"label$31\000"
.LASF69:
	.ascii	"label$32\000"
.LASF71:
	.ascii	"label$33\000"
.LASF66:
	.ascii	"label$34\000"
.LASF67:
	.ascii	"label$35\000"
.LASF68:
	.ascii	"label$36\000"
.LASF70:
	.ascii	"label$37\000"
.LASF75:
	.ascii	"label$38\000"
.LASF87:
	.ascii	"label$39\000"
.LASF115:
	.ascii	"TMP$15$4\000"
.LASF9:
	.ascii	"long long int\000"
.LASF53:
	.ascii	"label$22\000"
.LASF129:
	.ascii	"nearbyintf\000"
.LASF102:
	.ascii	"TMP$3$4\000"
.LASF14:
	.ascii	"vr$0\000"
.LASF15:
	.ascii	"vr$1\000"
.LASF25:
	.ascii	"NOUVEAU_Y$1\000"
.LASF72:
	.ascii	"label$28\000"
.LASF76:
	.ascii	"label$40\000"
.LASF12:
	.ascii	"TMP$26$0\000"
.LASF78:
	.ascii	"label$44\000"
.LASF18:
	.ascii	"SOURCE$1\000"
.LASF120:
	.ascii	"TMP$19$4\000"
.LASF125:
	.ascii	"fb_ErrorSetModName\000"
.LASF38:
	.ascii	"ACC_Y$1\000"
.LASF137:
	.ascii	"IMG_CHANGE_SIZE_QUICK\000"
.LASF135:
	.ascii	"/home/pi/cpcdos\000"
.LASF101:
	.ascii	"TMP$2$4\000"
.LASF3:
	.ascii	"unsigned char\000"
.LASF24:
	.ascii	"NOUVEAU_X$1\000"
.LASF106:
	.ascii	"TMP$7$6\000"
.LASF2:
	.ascii	"signed char\000"
.LASF10:
	.ascii	"long long unsigned int\000"
.LASF132:
	.ascii	"__builtin_nearbyint\000"
.LASF28:
	.ascii	"fb$result$1\000"
.LASF8:
	.ascii	"unsigned int\000"
.LASF77:
	.ascii	"label$41\000"
.LASF85:
	.ascii	"label$42\000"
.LASF37:
	.ascii	"ACC_X$1\000"
.LASF32:
	.ascii	"CALC_Y$1\000"
.LASF79:
	.ascii	"label$45\000"
.LASF83:
	.ascii	"label$46\000"
.LASF84:
	.ascii	"label$47\000"
.LASF80:
	.ascii	"label$48\000"
.LASF81:
	.ascii	"label$49\000"
.LASF105:
	.ascii	"TMP$6$6\000"
.LASF5:
	.ascii	"short unsigned int\000"
.LASF128:
	.ascii	"fb_ErrorThrowAt\000"
.LASF11:
	.ascii	"char\000"
.LASF46:
	.ascii	"label$9\000"
.LASF31:
	.ascii	"CALC_X$1\000"
.LASF104:
	.ascii	"TMP$5$6\000"
.LASF123:
	.ascii	"vr$123\000"
.LASF124:
	.ascii	"vr$126\000"
.LASF117:
	.ascii	"vr$96\000"
.LASF1:
	.ascii	"float\000"
.LASF118:
	.ascii	"vr$99\000"
.LASF74:
	.ascii	"label$10\000"
.LASF47:
	.ascii	"label$11\000"
.LASF61:
	.ascii	"label$12\000"
.LASF7:
	.ascii	"int32\000"
.LASF49:
	.ascii	"label$14\000"
.LASF58:
	.ascii	"label$15\000"
.LASF60:
	.ascii	"label$16\000"
.LASF50:
	.ascii	"label$17\000"
.LASF51:
	.ascii	"label$18\000"
.LASF55:
	.ascii	"label$19\000"
.LASF16:
	.ascii	"label$0\000"
.LASF17:
	.ascii	"label$1\000"
.LASF30:
	.ascii	"label$2\000"
.LASF100:
	.ascii	"label$3\000"
.LASF42:
	.ascii	"label$4\000"
.LASF41:
	.ascii	"label$5\000"
.LASF43:
	.ascii	"label$6\000"
.LASF45:
	.ascii	"label$7\000"
.LASF44:
	.ascii	"label$8\000"
.LASF40:
	.ascii	"ACCPSET_Y$1\000"
.LASF97:
	.ascii	"label$53\000"
.LASF99:
	.ascii	"label$54\000"
.LASF90:
	.ascii	"label$55\000"
.LASF91:
	.ascii	"label$56\000"
.LASF95:
	.ascii	"label$57\000"
.LASF29:
	.ascii	"vr$2\000"
.LASF64:
	.ascii	"label$30\000"
.LASF136:
	.ascii	"fb_ctor__bitmap\000"
.LASF109:
	.ascii	"TMP$10$4\000"
.LASF113:
	.ascii	"vr$60\000"
.LASF27:
	.ascii	"TMP$25$1\000"
.LASF21:
	.ascii	"PY$1\000"
.LASF134:
	.ascii	"OS2.2/Cpcdos/FBGUI/bitmap.c\000"
.LASF19:
	.ascii	"NOUVEAU_IMG$1\000"
.LASF82:
	.ascii	"label$50\000"
.LASF22:
	.ascii	"TAILLE_Y$1\000"
.LASF88:
	.ascii	"label$51\000"
.LASF39:
	.ascii	"ACCPSET_X$1\000"
.LASF89:
	.ascii	"label$52\000"
.LASF48:
	.ascii	"label$13\000"
.LASF34:
	.ascii	"BOUCLE_Y$1\000"
.LASF112:
	.ascii	"TMP$13$6\000"
.LASF96:
	.ascii	"label$58\000"
	.ident	"GCC: (Raspbian 10.2.1-6+rpi1) 10.2.1 20210110"
	.section	.note.GNU-stack,"",%progbits
