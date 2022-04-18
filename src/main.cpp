#include "EasyPatternScannerLib.h"
#include <iostream>

void TestPatternScanner() {
  EasyPatternScannerLib::PatternScanner PS;
  PS.SetReadCallback(NULL);
  void *resaddr;
  PS.SearchSig(4, (void *)0x401000, 0x1000, "33C0??", &resaddr);
}

int main() {
  TestPatternScanner();
  std::cout << "Hello from cmkr!\n";
}
