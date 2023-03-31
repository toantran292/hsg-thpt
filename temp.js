function discrete(cell) {
  clicked += 256;
  solution += cell.value;
  cell.disabled = 1;
  cell.checked = 1;
  if (clicked == 769 && cell != document.grid.c9) FOUT();
  if (clicked == 1025 && cell != document.grid.c3) FOUT();
  if (clicked == 2049 && cell != document.grid.c7) FOUT();
  if (clicked == 3073 && cell != document.grid.c60) FOUT();
  if (clicked == 3329 && cell != document.grid.c54) FOUT();
  if (clicked == 5889 && cell != document.grid.c11) FOUT();
  if (clicked == 7937 && cell != document.grid.c63) FOUT();
  if (clicked == 8449 && cell != document.grid.c36) FOUT();
  if (clicked == 8961 && cell != document.grid.c31) FOUT();
  if (clicked == 9985 && cell != document.grid.c0) FOUT();
  if (clicked == 11009 && cell != document.grid.c32) FOUT();
  if (clicked == 13569 && cell != document.grid.c34) FOUT();
  if (clicked == 16129) {
    document.grid.c56.checked = 0;
    document.grid.c56.disabled = 0;
  }
  if (clicked == 16385) {
    CheckSolution(solution);
  }
}
/*
3 -> c9
4 -> c3
8 -> c7
12 -> c60
13 -> c54
23 -> c11
31 -> c63
33 -> c36
35 -> c31
39 -> c0
43 -> c32
53 -> c34
63 
64

39 -> c0
4 -> c3
8 -> c7
3 -> c9
23 -> c11
35 -> c31
43 -> c32
53 -> c34
33 -> c36
13 -> c54
12 -> c60
31 -> c63
*/
