/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkawaguc <hkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 18:28:08 by hkawaguc          #+#    #+#             */
/*   Updated: 2025/06/11 18:34:10 by hkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_stack.h"
#include <stdlib.h> // atoi, malloc, free を使うために必要

int main(int argc, char *argv[])
{
	// コマンドライン引数が不足している場合のチェック
	if (argc < 2) {
		fprintf(stderr, "使い方: %s <数値1> <数値2> ...\n", argv[0]);
		return 1; // エラー終了
	}

	// コマンドライン引数の数（プログラム名を除く）が配列の要素数
	int n = argc - 1;
	// 数値を格納するための動的配列を確保
	int *arr = (int *)malloc(n * sizeof(int));

	// メモリ確保に失敗した場合のチェック
	if (arr == NULL) {
		fprintf(stderr, "メモリの確保に失敗しました。\n");
		return 1; // エラー終了
	}

	// コマンドライン引数を整数に変換して配列に格納
	for (int i = 0; i < n; i++) {
		arr[i] = atoi(argv[i + 1]); // argv[0] はプログラム名なので、argv[1]から開始
	}

	printf("元の配列: ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	// quick_sort 関数を呼び出して配列をソート
	quick_sort(arr, 0, n - 1);

	printf("ソート後の配列: ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	// 動的に確保したメモリを解放
	free(arr);

	return 0; // プログラムが正常終了したことを示す
}
