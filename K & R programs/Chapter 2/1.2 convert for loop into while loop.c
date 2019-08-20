int i= 0;

while( i < lim-1 ){
		if( (c = getchar()) == '\n' ){
			break;
		} else if ( c == EOF ){
			break;
		} else {
			s[i] = c;
		}
		i++;
}
