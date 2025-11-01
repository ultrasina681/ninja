extern int real_main(int argc, char** argv);

extern "C" __attribute__((visibility("default")))
int ninja_main(int argc, char** argv) {
  return real_main(argc, argv);
}