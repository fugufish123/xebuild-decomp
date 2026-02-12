void __cdecl FUN_00433690(uint log_level,char *log, ...) // write_log

{
  FILE *log_file_name;
  char buffer [516];
  va_list args;
  va_start(args, log);
  vsnprintf(buffer, sizeof(buffer), log, args);
  va_end(args);
  if (log_level <= DAT_00479aa4) {
    printf(buffer);
  }
  if ((log_level < 3) && (DAT_00479aa0 == 0)) {
    log_file_name = fopen("build.log","a");
    if (log_file_name != NULL) {
      fprintf(log_file_name,buffer);
      fclose(log_file_name);
      return;
    }
  }
  return;
}

