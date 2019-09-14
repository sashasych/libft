/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mharissa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 21:45:14 by mharissa          #+#    #+#             */
/*   Updated: 2019/09/12 23:35:30 by mharissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>


int main(void)
{
	printf("---------  test memset ---------\n");
	char array[27] = "avcnbvsbvsjvsn";
	int arrint[5] = {0,1,2,4,5};
	ft_memset(array, 67,  6);
	printf("%s\n", array);
	


	printf("----------- end test memset ----------\n");

	printf("------------ test bzero ------------\n");
	char array2[27] = "avcnbvsbvsjvsn";
	//int arrint[5] = {0,1,2,4,5};
	ft_bzero(array2, 6);
	printf("%s\n", array2);
	printf("------------ end test bzero ------------\n");

	
	printf("------------ start test ft_memcpy ------------\n");

	char array3[10] = "abcd";
	char array4[10] = "111111";
	char *testarr;
	testarr = ft_memcpy(array3, array4,  5);
	printf("%s test ft_memcpy", array3);


	printf("------------ end test ft_memcpy  ------------\n");

	printf("------------ end test ft_strdup ------------\n");
	char array5[5] = "abcd";
	char *array6;
	array6 =  ft_strdup(array5);
	printf("%s \n", array6);
	printf("%d",array6[4]);
	printf("------------ end test ft_strdup ------------\n");

	printf("------------ end test ft_strcat ------------\n");
	char str[100];
	ft_strcpy( str, "privet " );
	ft_strcat( str, "sucki ");
	ft_strcat( str, "eto "    );
	ft_strcat( str, "i "      );
	ft_strcat( str, "prishel!" );
	ft_strncat(str, "aaaaaaaaaaaaa", 3);
	printf("%s", str);
	printf("------------ end test ft_strcat ------------\n");
	

	char *array10 = "helloworld";
	array10 = ft_strchr(array10, 'o');
	printf("%s", array10);
	return (0);

}
