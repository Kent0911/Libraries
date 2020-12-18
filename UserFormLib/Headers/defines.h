#pragma once

//-----------------------------------------------------------------------------------------------------
//
// Windows特有の定義
//
//-----------------------------------------------------------------------------------------------------
#if defined (_MSC_VER)

// <math.h>の定義を有効にする
#define _USE_MATH_DEFINES

// fscanf等を使用した際の定義を有効にする
#define _CRT_SECURE_NO_WARNINGS


// 余計な警告を表示しないようにする
// 4477:fscanfの引数の型の警告
#pragma warning (disable:4477)
// 4244:型の変換の警告
#pragma warning (disable:4244)

// C4996に限り、エラーを表示しないようにする
#pragma warning (disable:4996)

#endif