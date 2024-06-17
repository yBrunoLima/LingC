/*
 * Ponteiros.c
 * 
 * Copyright 2024 Bruno Lima <jimbo@JimboPc>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>

int main()
{
	int k = 5;
	int y = 10;
	
	int* s = &y;
	int j = *s *10;
	
	int *w = &j;
	int* q = &k;
	
	int a = *w +*q;
	printf(" %d", a);
	return 0;
}

