//=== MipsInstPrinter.h - Convert Mips MCInst to assembly syntax -*- C++ -*-==//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This class prints a Mips MCInst to a .s file.
//
//===----------------------------------------------------------------------===//

/* Capstone Disassembler Engine */
/* By Nguyen Anh Quynh <aquynh@gmail.com>, 2013> */

#ifndef CS_MIPSINSTPRINTER_H
#define CS_MIPSINSTPRINTER_H

void Mips_printInst(MCInst *MI, SStream *O, void *info);

#endif
