#pragma once

//-----------------------------------------------------------------------------------------------------
//
// Windows���L�̒�`
//
//-----------------------------------------------------------------------------------------------------
#if defined (_MSC_VER)

// <math.h>�̒�`��L���ɂ���
#define _USE_MATH_DEFINES

// fscanf�����g�p�����ۂ̒�`��L���ɂ���
#define _CRT_SECURE_NO_WARNINGS


// �]�v�Ȍx����\�����Ȃ��悤�ɂ���
// 4477:fscanf�̈����̌^�̌x��
#pragma warning (disable:4477)
// 4244:�^�̕ϊ��̌x��
#pragma warning (disable:4244)

// C4996�Ɍ���A�G���[��\�����Ȃ��悤�ɂ���
#pragma warning (disable:4996)

#endif