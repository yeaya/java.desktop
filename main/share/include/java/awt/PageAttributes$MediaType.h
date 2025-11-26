#ifndef _java_awt_PageAttributes$MediaType_h_
#define _java_awt_PageAttributes$MediaType_h_
//$ class java.awt.PageAttributes$MediaType
//$ extends java.awt.AttributeValue

#include <java/awt/AttributeValue.h>
#include <java/lang/Array.h>

#pragma push_macro("A")
#undef A
#pragma push_macro("B")
#undef B
#pragma push_macro("C")
#undef C
#pragma push_macro("D")
#undef D
#pragma push_macro("E")
#undef E
#pragma push_macro("ENV_10")
#undef ENV_10
#pragma push_macro("ENV_11")
#undef ENV_11
#pragma push_macro("ENV_12")
#undef ENV_12
#pragma push_macro("ENV_14")
#undef ENV_14
#pragma push_macro("ENV_6X9")
#undef ENV_6X9
#pragma push_macro("ENV_7X9")
#undef ENV_7X9
#pragma push_macro("ENV_9")
#undef ENV_9
#pragma push_macro("ENV_9X11")
#undef ENV_9X11
#pragma push_macro("ENV_9X12")
#undef ENV_9X12
#pragma push_macro("ENV_INVITE")
#undef ENV_INVITE
#pragma push_macro("ENV_ITALY")
#undef ENV_ITALY
#pragma push_macro("ENV_MONARCH")
#undef ENV_MONARCH
#pragma push_macro("ENV_PERSONAL")
#undef ENV_PERSONAL
#pragma push_macro("EXECUTIVE")
#undef EXECUTIVE
#pragma push_macro("FOLIO")
#undef FOLIO
#pragma push_macro("INVITE")
#undef INVITE
#pragma push_macro("INVITE_ENVELOPE")
#undef INVITE_ENVELOPE
#pragma push_macro("INVOICE")
#undef INVOICE
#pragma push_macro("ISO_2A0")
#undef ISO_2A0
#pragma push_macro("ISO_4A0")
#undef ISO_4A0
#pragma push_macro("ISO_A0")
#undef ISO_A0
#pragma push_macro("ISO_A1")
#undef ISO_A1
#pragma push_macro("ISO_A10")
#undef ISO_A10
#pragma push_macro("ISO_A2")
#undef ISO_A2
#pragma push_macro("ISO_A3")
#undef ISO_A3
#pragma push_macro("ISO_A4")
#undef ISO_A4
#pragma push_macro("ISO_A5")
#undef ISO_A5
#pragma push_macro("ISO_A6")
#undef ISO_A6
#pragma push_macro("ISO_A7")
#undef ISO_A7
#pragma push_macro("ISO_A8")
#undef ISO_A8
#pragma push_macro("ISO_A9")
#undef ISO_A9
#pragma push_macro("ISO_B0")
#undef ISO_B0
#pragma push_macro("ISO_B1")
#undef ISO_B1
#pragma push_macro("ISO_B10")
#undef ISO_B10
#pragma push_macro("ISO_B2")
#undef ISO_B2
#pragma push_macro("ISO_B3")
#undef ISO_B3
#pragma push_macro("ISO_B4")
#undef ISO_B4
#pragma push_macro("ISO_B4_ENVELOPE")
#undef ISO_B4_ENVELOPE
#pragma push_macro("ISO_B5")
#undef ISO_B5
#pragma push_macro("ISO_B5_ENVELOPE")
#undef ISO_B5_ENVELOPE
#pragma push_macro("ISO_B6")
#undef ISO_B6
#pragma push_macro("ISO_B7")
#undef ISO_B7
#pragma push_macro("ISO_B8")
#undef ISO_B8
#pragma push_macro("ISO_B9")
#undef ISO_B9
#pragma push_macro("ISO_C0")
#undef ISO_C0
#pragma push_macro("ISO_C0_ENVELOPE")
#undef ISO_C0_ENVELOPE
#pragma push_macro("ISO_C1")
#undef ISO_C1
#pragma push_macro("ISO_C10")
#undef ISO_C10
#pragma push_macro("ISO_C10_ENVELOPE")
#undef ISO_C10_ENVELOPE
#pragma push_macro("ISO_C1_ENVELOPE")
#undef ISO_C1_ENVELOPE
#pragma push_macro("ISO_C2")
#undef ISO_C2
#pragma push_macro("ISO_C2_ENVELOPE")
#undef ISO_C2_ENVELOPE
#pragma push_macro("ISO_C3")
#undef ISO_C3
#pragma push_macro("ISO_C3_ENVELOPE")
#undef ISO_C3_ENVELOPE
#pragma push_macro("ISO_C4")
#undef ISO_C4
#pragma push_macro("ISO_C4_ENVELOPE")
#undef ISO_C4_ENVELOPE
#pragma push_macro("ISO_C5")
#undef ISO_C5
#pragma push_macro("ISO_C5_ENVELOPE")
#undef ISO_C5_ENVELOPE
#pragma push_macro("ISO_C6")
#undef ISO_C6
#pragma push_macro("ISO_C6_ENVELOPE")
#undef ISO_C6_ENVELOPE
#pragma push_macro("ISO_C7")
#undef ISO_C7
#pragma push_macro("ISO_C7_ENVELOPE")
#undef ISO_C7_ENVELOPE
#pragma push_macro("ISO_C8")
#undef ISO_C8
#pragma push_macro("ISO_C8_ENVELOPE")
#undef ISO_C8_ENVELOPE
#pragma push_macro("ISO_C9")
#undef ISO_C9
#pragma push_macro("ISO_C9_ENVELOPE")
#undef ISO_C9_ENVELOPE
#pragma push_macro("ISO_DESIGNATED_LONG")
#undef ISO_DESIGNATED_LONG
#pragma push_macro("ISO_DESIGNATED_LONG_ENVELOPE")
#undef ISO_DESIGNATED_LONG_ENVELOPE
#pragma push_macro("ITALY")
#undef ITALY
#pragma push_macro("ITALY_ENVELOPE")
#undef ITALY_ENVELOPE
#pragma push_macro("I_A")
#undef I_A
#pragma push_macro("I_B")
#undef I_B
#pragma push_macro("I_C")
#undef I_C
#pragma push_macro("I_D")
#undef I_D
#pragma push_macro("I_E")
#undef I_E
#pragma push_macro("I_EXECUTIVE")
#undef I_EXECUTIVE
#pragma push_macro("I_FOLIO")
#undef I_FOLIO
#pragma push_macro("I_INVITE_ENVELOPE")
#undef I_INVITE_ENVELOPE
#pragma push_macro("I_INVOICE")
#undef I_INVOICE
#pragma push_macro("I_ISO_2A0")
#undef I_ISO_2A0
#pragma push_macro("I_ISO_4A0")
#undef I_ISO_4A0
#pragma push_macro("I_ISO_A0")
#undef I_ISO_A0
#pragma push_macro("I_ISO_A1")
#undef I_ISO_A1
#pragma push_macro("I_ISO_A10")
#undef I_ISO_A10
#pragma push_macro("I_ISO_A2")
#undef I_ISO_A2
#pragma push_macro("I_ISO_A3")
#undef I_ISO_A3
#pragma push_macro("I_ISO_A4")
#undef I_ISO_A4
#pragma push_macro("I_ISO_A5")
#undef I_ISO_A5
#pragma push_macro("I_ISO_A6")
#undef I_ISO_A6
#pragma push_macro("I_ISO_A7")
#undef I_ISO_A7
#pragma push_macro("I_ISO_A8")
#undef I_ISO_A8
#pragma push_macro("I_ISO_A9")
#undef I_ISO_A9
#pragma push_macro("I_ISO_B0")
#undef I_ISO_B0
#pragma push_macro("I_ISO_B1")
#undef I_ISO_B1
#pragma push_macro("I_ISO_B10")
#undef I_ISO_B10
#pragma push_macro("I_ISO_B2")
#undef I_ISO_B2
#pragma push_macro("I_ISO_B3")
#undef I_ISO_B3
#pragma push_macro("I_ISO_B4")
#undef I_ISO_B4
#pragma push_macro("I_ISO_B5")
#undef I_ISO_B5
#pragma push_macro("I_ISO_B6")
#undef I_ISO_B6
#pragma push_macro("I_ISO_B7")
#undef I_ISO_B7
#pragma push_macro("I_ISO_B8")
#undef I_ISO_B8
#pragma push_macro("I_ISO_B9")
#undef I_ISO_B9
#pragma push_macro("I_ISO_C0")
#undef I_ISO_C0
#pragma push_macro("I_ISO_C1")
#undef I_ISO_C1
#pragma push_macro("I_ISO_C10")
#undef I_ISO_C10
#pragma push_macro("I_ISO_C2")
#undef I_ISO_C2
#pragma push_macro("I_ISO_C3")
#undef I_ISO_C3
#pragma push_macro("I_ISO_C4")
#undef I_ISO_C4
#pragma push_macro("I_ISO_C5")
#undef I_ISO_C5
#pragma push_macro("I_ISO_C6")
#undef I_ISO_C6
#pragma push_macro("I_ISO_C7")
#undef I_ISO_C7
#pragma push_macro("I_ISO_C8")
#undef I_ISO_C8
#pragma push_macro("I_ISO_C9")
#undef I_ISO_C9
#pragma push_macro("I_ISO_DESIGNATED_LONG")
#undef I_ISO_DESIGNATED_LONG
#pragma push_macro("I_ITALY_ENVELOPE")
#undef I_ITALY_ENVELOPE
#pragma push_macro("I_JIS_B0")
#undef I_JIS_B0
#pragma push_macro("I_JIS_B1")
#undef I_JIS_B1
#pragma push_macro("I_JIS_B10")
#undef I_JIS_B10
#pragma push_macro("I_JIS_B2")
#undef I_JIS_B2
#pragma push_macro("I_JIS_B3")
#undef I_JIS_B3
#pragma push_macro("I_JIS_B4")
#undef I_JIS_B4
#pragma push_macro("I_JIS_B5")
#undef I_JIS_B5
#pragma push_macro("I_JIS_B6")
#undef I_JIS_B6
#pragma push_macro("I_JIS_B7")
#undef I_JIS_B7
#pragma push_macro("I_JIS_B8")
#undef I_JIS_B8
#pragma push_macro("I_JIS_B9")
#undef I_JIS_B9
#pragma push_macro("I_LEDGER")
#undef I_LEDGER
#pragma push_macro("I_MONARCH_ENVELOPE")
#undef I_MONARCH_ENVELOPE
#pragma push_macro("I_NA_6X9_ENVELOPE")
#undef I_NA_6X9_ENVELOPE
#pragma push_macro("I_NA_7X9_ENVELOPE")
#undef I_NA_7X9_ENVELOPE
#pragma push_macro("I_NA_9X11_ENVELOPE")
#undef I_NA_9X11_ENVELOPE
#pragma push_macro("I_NA_9X12_ENVELOPE")
#undef I_NA_9X12_ENVELOPE
#pragma push_macro("I_NA_LEGAL")
#undef I_NA_LEGAL
#pragma push_macro("I_NA_LETTER")
#undef I_NA_LETTER
#pragma push_macro("I_NA_NUMBER_10_ENVELOPE")
#undef I_NA_NUMBER_10_ENVELOPE
#pragma push_macro("I_NA_NUMBER_11_ENVELOPE")
#undef I_NA_NUMBER_11_ENVELOPE
#pragma push_macro("I_NA_NUMBER_12_ENVELOPE")
#undef I_NA_NUMBER_12_ENVELOPE
#pragma push_macro("I_NA_NUMBER_14_ENVELOPE")
#undef I_NA_NUMBER_14_ENVELOPE
#pragma push_macro("I_NA_NUMBER_9_ENVELOPE")
#undef I_NA_NUMBER_9_ENVELOPE
#pragma push_macro("I_PERSONAL_ENVELOPE")
#undef I_PERSONAL_ENVELOPE
#pragma push_macro("I_QUARTO")
#undef I_QUARTO
#pragma push_macro("JIS_B0")
#undef JIS_B0
#pragma push_macro("JIS_B1")
#undef JIS_B1
#pragma push_macro("JIS_B10")
#undef JIS_B10
#pragma push_macro("JIS_B2")
#undef JIS_B2
#pragma push_macro("JIS_B3")
#undef JIS_B3
#pragma push_macro("JIS_B4")
#undef JIS_B4
#pragma push_macro("JIS_B5")
#undef JIS_B5
#pragma push_macro("JIS_B6")
#undef JIS_B6
#pragma push_macro("JIS_B7")
#undef JIS_B7
#pragma push_macro("JIS_B8")
#undef JIS_B8
#pragma push_macro("JIS_B9")
#undef JIS_B9
#pragma push_macro("LEDGER")
#undef LEDGER
#pragma push_macro("LEGAL")
#undef LEGAL
#pragma push_macro("LETTER")
#undef LETTER
#pragma push_macro("MONARCH")
#undef MONARCH
#pragma push_macro("MONARCH_ENVELOPE")
#undef MONARCH_ENVELOPE
#pragma push_macro("NAMES")
#undef NAMES
#pragma push_macro("NA_6X9_ENVELOPE")
#undef NA_6X9_ENVELOPE
#pragma push_macro("NA_7X9_ENVELOPE")
#undef NA_7X9_ENVELOPE
#pragma push_macro("NA_9X11_ENVELOPE")
#undef NA_9X11_ENVELOPE
#pragma push_macro("NA_9X12_ENVELOPE")
#undef NA_9X12_ENVELOPE
#pragma push_macro("NA_LEGAL")
#undef NA_LEGAL
#pragma push_macro("NA_LETTER")
#undef NA_LETTER
#pragma push_macro("NA_NUMBER_10_ENVELOPE")
#undef NA_NUMBER_10_ENVELOPE
#pragma push_macro("NA_NUMBER_11_ENVELOPE")
#undef NA_NUMBER_11_ENVELOPE
#pragma push_macro("NA_NUMBER_12_ENVELOPE")
#undef NA_NUMBER_12_ENVELOPE
#pragma push_macro("NA_NUMBER_14_ENVELOPE")
#undef NA_NUMBER_14_ENVELOPE
#pragma push_macro("NA_NUMBER_9_ENVELOPE")
#undef NA_NUMBER_9_ENVELOPE
#pragma push_macro("NOTE")
#undef NOTE
#pragma push_macro("PERSONAL")
#undef PERSONAL
#pragma push_macro("PERSONAL_ENVELOPE")
#undef PERSONAL_ENVELOPE
#pragma push_macro("QUARTO")
#undef QUARTO
#pragma push_macro("STATEMENT")
#undef STATEMENT
#pragma push_macro("TABLOID")
#undef TABLOID

namespace java {
	namespace awt {

class $import PageAttributes$MediaType : public ::java::awt::AttributeValue {
	$class(PageAttributes$MediaType, 0, ::java::awt::AttributeValue)
public:
	PageAttributes$MediaType();
	void init$(int32_t type);
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	static const int32_t I_ISO_4A0 = 0;
	static const int32_t I_ISO_2A0 = 1;
	static const int32_t I_ISO_A0 = 2;
	static const int32_t I_ISO_A1 = 3;
	static const int32_t I_ISO_A2 = 4;
	static const int32_t I_ISO_A3 = 5;
	static const int32_t I_ISO_A4 = 6;
	static const int32_t I_ISO_A5 = 7;
	static const int32_t I_ISO_A6 = 8;
	static const int32_t I_ISO_A7 = 9;
	static const int32_t I_ISO_A8 = 10;
	static const int32_t I_ISO_A9 = 11;
	static const int32_t I_ISO_A10 = 12;
	static const int32_t I_ISO_B0 = 13;
	static const int32_t I_ISO_B1 = 14;
	static const int32_t I_ISO_B2 = 15;
	static const int32_t I_ISO_B3 = 16;
	static const int32_t I_ISO_B4 = 17;
	static const int32_t I_ISO_B5 = 18;
	static const int32_t I_ISO_B6 = 19;
	static const int32_t I_ISO_B7 = 20;
	static const int32_t I_ISO_B8 = 21;
	static const int32_t I_ISO_B9 = 22;
	static const int32_t I_ISO_B10 = 23;
	static const int32_t I_JIS_B0 = 24;
	static const int32_t I_JIS_B1 = 25;
	static const int32_t I_JIS_B2 = 26;
	static const int32_t I_JIS_B3 = 27;
	static const int32_t I_JIS_B4 = 28;
	static const int32_t I_JIS_B5 = 29;
	static const int32_t I_JIS_B6 = 30;
	static const int32_t I_JIS_B7 = 31;
	static const int32_t I_JIS_B8 = 32;
	static const int32_t I_JIS_B9 = 33;
	static const int32_t I_JIS_B10 = 34;
	static const int32_t I_ISO_C0 = 35;
	static const int32_t I_ISO_C1 = 36;
	static const int32_t I_ISO_C2 = 37;
	static const int32_t I_ISO_C3 = 38;
	static const int32_t I_ISO_C4 = 39;
	static const int32_t I_ISO_C5 = 40;
	static const int32_t I_ISO_C6 = 41;
	static const int32_t I_ISO_C7 = 42;
	static const int32_t I_ISO_C8 = 43;
	static const int32_t I_ISO_C9 = 44;
	static const int32_t I_ISO_C10 = 45;
	static const int32_t I_ISO_DESIGNATED_LONG = 46;
	static const int32_t I_EXECUTIVE = 47;
	static const int32_t I_FOLIO = 48;
	static const int32_t I_INVOICE = 49;
	static const int32_t I_LEDGER = 50;
	static const int32_t I_NA_LETTER = 51;
	static const int32_t I_NA_LEGAL = 52;
	static const int32_t I_QUARTO = 53;
	static const int32_t I_A = 54;
	static const int32_t I_B = 55;
	static const int32_t I_C = 56;
	static const int32_t I_D = 57;
	static const int32_t I_E = 58;
	static const int32_t I_NA_10X15_ENVELOPE = 59;
	static const int32_t I_NA_10X14_ENVELOPE = 60;
	static const int32_t I_NA_10X13_ENVELOPE = 61;
	static const int32_t I_NA_9X12_ENVELOPE = 62;
	static const int32_t I_NA_9X11_ENVELOPE = 63;
	static const int32_t I_NA_7X9_ENVELOPE = 64;
	static const int32_t I_NA_6X9_ENVELOPE = 65;
	static const int32_t I_NA_NUMBER_9_ENVELOPE = 66;
	static const int32_t I_NA_NUMBER_10_ENVELOPE = 67;
	static const int32_t I_NA_NUMBER_11_ENVELOPE = 68;
	static const int32_t I_NA_NUMBER_12_ENVELOPE = 69;
	static const int32_t I_NA_NUMBER_14_ENVELOPE = 70;
	static const int32_t I_INVITE_ENVELOPE = 71;
	static const int32_t I_ITALY_ENVELOPE = 72;
	static const int32_t I_MONARCH_ENVELOPE = 73;
	static const int32_t I_PERSONAL_ENVELOPE = 74;
	static $StringArray* NAMES;
	static ::java::awt::PageAttributes$MediaType* ISO_4A0;
	static ::java::awt::PageAttributes$MediaType* ISO_2A0;
	static ::java::awt::PageAttributes$MediaType* ISO_A0;
	static ::java::awt::PageAttributes$MediaType* ISO_A1;
	static ::java::awt::PageAttributes$MediaType* ISO_A2;
	static ::java::awt::PageAttributes$MediaType* ISO_A3;
	static ::java::awt::PageAttributes$MediaType* ISO_A4;
	static ::java::awt::PageAttributes$MediaType* ISO_A5;
	static ::java::awt::PageAttributes$MediaType* ISO_A6;
	static ::java::awt::PageAttributes$MediaType* ISO_A7;
	static ::java::awt::PageAttributes$MediaType* ISO_A8;
	static ::java::awt::PageAttributes$MediaType* ISO_A9;
	static ::java::awt::PageAttributes$MediaType* ISO_A10;
	static ::java::awt::PageAttributes$MediaType* ISO_B0;
	static ::java::awt::PageAttributes$MediaType* ISO_B1;
	static ::java::awt::PageAttributes$MediaType* ISO_B2;
	static ::java::awt::PageAttributes$MediaType* ISO_B3;
	static ::java::awt::PageAttributes$MediaType* ISO_B4;
	static ::java::awt::PageAttributes$MediaType* ISO_B5;
	static ::java::awt::PageAttributes$MediaType* ISO_B6;
	static ::java::awt::PageAttributes$MediaType* ISO_B7;
	static ::java::awt::PageAttributes$MediaType* ISO_B8;
	static ::java::awt::PageAttributes$MediaType* ISO_B9;
	static ::java::awt::PageAttributes$MediaType* ISO_B10;
	static ::java::awt::PageAttributes$MediaType* JIS_B0;
	static ::java::awt::PageAttributes$MediaType* JIS_B1;
	static ::java::awt::PageAttributes$MediaType* JIS_B2;
	static ::java::awt::PageAttributes$MediaType* JIS_B3;
	static ::java::awt::PageAttributes$MediaType* JIS_B4;
	static ::java::awt::PageAttributes$MediaType* JIS_B5;
	static ::java::awt::PageAttributes$MediaType* JIS_B6;
	static ::java::awt::PageAttributes$MediaType* JIS_B7;
	static ::java::awt::PageAttributes$MediaType* JIS_B8;
	static ::java::awt::PageAttributes$MediaType* JIS_B9;
	static ::java::awt::PageAttributes$MediaType* JIS_B10;
	static ::java::awt::PageAttributes$MediaType* ISO_C0;
	static ::java::awt::PageAttributes$MediaType* ISO_C1;
	static ::java::awt::PageAttributes$MediaType* ISO_C2;
	static ::java::awt::PageAttributes$MediaType* ISO_C3;
	static ::java::awt::PageAttributes$MediaType* ISO_C4;
	static ::java::awt::PageAttributes$MediaType* ISO_C5;
	static ::java::awt::PageAttributes$MediaType* ISO_C6;
	static ::java::awt::PageAttributes$MediaType* ISO_C7;
	static ::java::awt::PageAttributes$MediaType* ISO_C8;
	static ::java::awt::PageAttributes$MediaType* ISO_C9;
	static ::java::awt::PageAttributes$MediaType* ISO_C10;
	static ::java::awt::PageAttributes$MediaType* ISO_DESIGNATED_LONG;
	static ::java::awt::PageAttributes$MediaType* EXECUTIVE;
	static ::java::awt::PageAttributes$MediaType* FOLIO;
	static ::java::awt::PageAttributes$MediaType* INVOICE;
	static ::java::awt::PageAttributes$MediaType* LEDGER;
	static ::java::awt::PageAttributes$MediaType* NA_LETTER;
	static ::java::awt::PageAttributes$MediaType* NA_LEGAL;
	static ::java::awt::PageAttributes$MediaType* QUARTO;
	static ::java::awt::PageAttributes$MediaType* A;
	static ::java::awt::PageAttributes$MediaType* B;
	static ::java::awt::PageAttributes$MediaType* C;
	static ::java::awt::PageAttributes$MediaType* D;
	static ::java::awt::PageAttributes$MediaType* E;
	static ::java::awt::PageAttributes$MediaType* NA_10X15_ENVELOPE;
	static ::java::awt::PageAttributes$MediaType* NA_10X14_ENVELOPE;
	static ::java::awt::PageAttributes$MediaType* NA_10X13_ENVELOPE;
	static ::java::awt::PageAttributes$MediaType* NA_9X12_ENVELOPE;
	static ::java::awt::PageAttributes$MediaType* NA_9X11_ENVELOPE;
	static ::java::awt::PageAttributes$MediaType* NA_7X9_ENVELOPE;
	static ::java::awt::PageAttributes$MediaType* NA_6X9_ENVELOPE;
	static ::java::awt::PageAttributes$MediaType* NA_NUMBER_9_ENVELOPE;
	static ::java::awt::PageAttributes$MediaType* NA_NUMBER_10_ENVELOPE;
	static ::java::awt::PageAttributes$MediaType* NA_NUMBER_11_ENVELOPE;
	static ::java::awt::PageAttributes$MediaType* NA_NUMBER_12_ENVELOPE;
	static ::java::awt::PageAttributes$MediaType* NA_NUMBER_14_ENVELOPE;
	static ::java::awt::PageAttributes$MediaType* INVITE_ENVELOPE;
	static ::java::awt::PageAttributes$MediaType* ITALY_ENVELOPE;
	static ::java::awt::PageAttributes$MediaType* MONARCH_ENVELOPE;
	static ::java::awt::PageAttributes$MediaType* PERSONAL_ENVELOPE;
	static ::java::awt::PageAttributes$MediaType* A0;
	static ::java::awt::PageAttributes$MediaType* A1;
	static ::java::awt::PageAttributes$MediaType* A2;
	static ::java::awt::PageAttributes$MediaType* A3;
	static ::java::awt::PageAttributes$MediaType* A4;
	static ::java::awt::PageAttributes$MediaType* A5;
	static ::java::awt::PageAttributes$MediaType* A6;
	static ::java::awt::PageAttributes$MediaType* A7;
	static ::java::awt::PageAttributes$MediaType* A8;
	static ::java::awt::PageAttributes$MediaType* A9;
	static ::java::awt::PageAttributes$MediaType* A10;
	static ::java::awt::PageAttributes$MediaType* B0;
	static ::java::awt::PageAttributes$MediaType* B1;
	static ::java::awt::PageAttributes$MediaType* B2;
	static ::java::awt::PageAttributes$MediaType* B3;
	static ::java::awt::PageAttributes$MediaType* B4;
	static ::java::awt::PageAttributes$MediaType* ISO_B4_ENVELOPE;
	static ::java::awt::PageAttributes$MediaType* B5;
	static ::java::awt::PageAttributes$MediaType* ISO_B5_ENVELOPE;
	static ::java::awt::PageAttributes$MediaType* B6;
	static ::java::awt::PageAttributes$MediaType* B7;
	static ::java::awt::PageAttributes$MediaType* B8;
	static ::java::awt::PageAttributes$MediaType* B9;
	static ::java::awt::PageAttributes$MediaType* B10;
	static ::java::awt::PageAttributes$MediaType* C0;
	static ::java::awt::PageAttributes$MediaType* ISO_C0_ENVELOPE;
	static ::java::awt::PageAttributes$MediaType* C1;
	static ::java::awt::PageAttributes$MediaType* ISO_C1_ENVELOPE;
	static ::java::awt::PageAttributes$MediaType* C2;
	static ::java::awt::PageAttributes$MediaType* ISO_C2_ENVELOPE;
	static ::java::awt::PageAttributes$MediaType* C3;
	static ::java::awt::PageAttributes$MediaType* ISO_C3_ENVELOPE;
	static ::java::awt::PageAttributes$MediaType* C4;
	static ::java::awt::PageAttributes$MediaType* ISO_C4_ENVELOPE;
	static ::java::awt::PageAttributes$MediaType* C5;
	static ::java::awt::PageAttributes$MediaType* ISO_C5_ENVELOPE;
	static ::java::awt::PageAttributes$MediaType* C6;
	static ::java::awt::PageAttributes$MediaType* ISO_C6_ENVELOPE;
	static ::java::awt::PageAttributes$MediaType* C7;
	static ::java::awt::PageAttributes$MediaType* ISO_C7_ENVELOPE;
	static ::java::awt::PageAttributes$MediaType* C8;
	static ::java::awt::PageAttributes$MediaType* ISO_C8_ENVELOPE;
	static ::java::awt::PageAttributes$MediaType* C9;
	static ::java::awt::PageAttributes$MediaType* ISO_C9_ENVELOPE;
	static ::java::awt::PageAttributes$MediaType* C10;
	static ::java::awt::PageAttributes$MediaType* ISO_C10_ENVELOPE;
	static ::java::awt::PageAttributes$MediaType* ISO_DESIGNATED_LONG_ENVELOPE;
	static ::java::awt::PageAttributes$MediaType* STATEMENT;
	static ::java::awt::PageAttributes$MediaType* TABLOID;
	static ::java::awt::PageAttributes$MediaType* LETTER;
	static ::java::awt::PageAttributes$MediaType* NOTE;
	static ::java::awt::PageAttributes$MediaType* LEGAL;
	static ::java::awt::PageAttributes$MediaType* ENV_10X15;
	static ::java::awt::PageAttributes$MediaType* ENV_10X14;
	static ::java::awt::PageAttributes$MediaType* ENV_10X13;
	static ::java::awt::PageAttributes$MediaType* ENV_9X12;
	static ::java::awt::PageAttributes$MediaType* ENV_9X11;
	static ::java::awt::PageAttributes$MediaType* ENV_7X9;
	static ::java::awt::PageAttributes$MediaType* ENV_6X9;
	static ::java::awt::PageAttributes$MediaType* ENV_9;
	static ::java::awt::PageAttributes$MediaType* ENV_10;
	static ::java::awt::PageAttributes$MediaType* ENV_11;
	static ::java::awt::PageAttributes$MediaType* ENV_12;
	static ::java::awt::PageAttributes$MediaType* ENV_14;
	static ::java::awt::PageAttributes$MediaType* ENV_INVITE;
	static ::java::awt::PageAttributes$MediaType* ENV_ITALY;
	static ::java::awt::PageAttributes$MediaType* ENV_MONARCH;
	static ::java::awt::PageAttributes$MediaType* ENV_PERSONAL;
	static ::java::awt::PageAttributes$MediaType* INVITE;
	static ::java::awt::PageAttributes$MediaType* ITALY;
	static ::java::awt::PageAttributes$MediaType* MONARCH;
	static ::java::awt::PageAttributes$MediaType* PERSONAL;
};

	} // awt
} // java

#pragma pop_macro("A")
#pragma pop_macro("B")
#pragma pop_macro("C")
#pragma pop_macro("D")
#pragma pop_macro("E")
#pragma pop_macro("ENV_10")
#pragma pop_macro("ENV_11")
#pragma pop_macro("ENV_12")
#pragma pop_macro("ENV_14")
#pragma pop_macro("ENV_6X9")
#pragma pop_macro("ENV_7X9")
#pragma pop_macro("ENV_9")
#pragma pop_macro("ENV_9X11")
#pragma pop_macro("ENV_9X12")
#pragma pop_macro("ENV_INVITE")
#pragma pop_macro("ENV_ITALY")
#pragma pop_macro("ENV_MONARCH")
#pragma pop_macro("ENV_PERSONAL")
#pragma pop_macro("EXECUTIVE")
#pragma pop_macro("FOLIO")
#pragma pop_macro("INVITE")
#pragma pop_macro("INVITE_ENVELOPE")
#pragma pop_macro("INVOICE")
#pragma pop_macro("ISO_2A0")
#pragma pop_macro("ISO_4A0")
#pragma pop_macro("ISO_A0")
#pragma pop_macro("ISO_A1")
#pragma pop_macro("ISO_A10")
#pragma pop_macro("ISO_A2")
#pragma pop_macro("ISO_A3")
#pragma pop_macro("ISO_A4")
#pragma pop_macro("ISO_A5")
#pragma pop_macro("ISO_A6")
#pragma pop_macro("ISO_A7")
#pragma pop_macro("ISO_A8")
#pragma pop_macro("ISO_A9")
#pragma pop_macro("ISO_B0")
#pragma pop_macro("ISO_B1")
#pragma pop_macro("ISO_B10")
#pragma pop_macro("ISO_B2")
#pragma pop_macro("ISO_B3")
#pragma pop_macro("ISO_B4")
#pragma pop_macro("ISO_B4_ENVELOPE")
#pragma pop_macro("ISO_B5")
#pragma pop_macro("ISO_B5_ENVELOPE")
#pragma pop_macro("ISO_B6")
#pragma pop_macro("ISO_B7")
#pragma pop_macro("ISO_B8")
#pragma pop_macro("ISO_B9")
#pragma pop_macro("ISO_C0")
#pragma pop_macro("ISO_C0_ENVELOPE")
#pragma pop_macro("ISO_C1")
#pragma pop_macro("ISO_C10")
#pragma pop_macro("ISO_C10_ENVELOPE")
#pragma pop_macro("ISO_C1_ENVELOPE")
#pragma pop_macro("ISO_C2")
#pragma pop_macro("ISO_C2_ENVELOPE")
#pragma pop_macro("ISO_C3")
#pragma pop_macro("ISO_C3_ENVELOPE")
#pragma pop_macro("ISO_C4")
#pragma pop_macro("ISO_C4_ENVELOPE")
#pragma pop_macro("ISO_C5")
#pragma pop_macro("ISO_C5_ENVELOPE")
#pragma pop_macro("ISO_C6")
#pragma pop_macro("ISO_C6_ENVELOPE")
#pragma pop_macro("ISO_C7")
#pragma pop_macro("ISO_C7_ENVELOPE")
#pragma pop_macro("ISO_C8")
#pragma pop_macro("ISO_C8_ENVELOPE")
#pragma pop_macro("ISO_C9")
#pragma pop_macro("ISO_C9_ENVELOPE")
#pragma pop_macro("ISO_DESIGNATED_LONG")
#pragma pop_macro("ISO_DESIGNATED_LONG_ENVELOPE")
#pragma pop_macro("ITALY")
#pragma pop_macro("ITALY_ENVELOPE")
#pragma pop_macro("I_A")
#pragma pop_macro("I_B")
#pragma pop_macro("I_C")
#pragma pop_macro("I_D")
#pragma pop_macro("I_E")
#pragma pop_macro("I_EXECUTIVE")
#pragma pop_macro("I_FOLIO")
#pragma pop_macro("I_INVITE_ENVELOPE")
#pragma pop_macro("I_INVOICE")
#pragma pop_macro("I_ISO_2A0")
#pragma pop_macro("I_ISO_4A0")
#pragma pop_macro("I_ISO_A0")
#pragma pop_macro("I_ISO_A1")
#pragma pop_macro("I_ISO_A10")
#pragma pop_macro("I_ISO_A2")
#pragma pop_macro("I_ISO_A3")
#pragma pop_macro("I_ISO_A4")
#pragma pop_macro("I_ISO_A5")
#pragma pop_macro("I_ISO_A6")
#pragma pop_macro("I_ISO_A7")
#pragma pop_macro("I_ISO_A8")
#pragma pop_macro("I_ISO_A9")
#pragma pop_macro("I_ISO_B0")
#pragma pop_macro("I_ISO_B1")
#pragma pop_macro("I_ISO_B10")
#pragma pop_macro("I_ISO_B2")
#pragma pop_macro("I_ISO_B3")
#pragma pop_macro("I_ISO_B4")
#pragma pop_macro("I_ISO_B5")
#pragma pop_macro("I_ISO_B6")
#pragma pop_macro("I_ISO_B7")
#pragma pop_macro("I_ISO_B8")
#pragma pop_macro("I_ISO_B9")
#pragma pop_macro("I_ISO_C0")
#pragma pop_macro("I_ISO_C1")
#pragma pop_macro("I_ISO_C10")
#pragma pop_macro("I_ISO_C2")
#pragma pop_macro("I_ISO_C3")
#pragma pop_macro("I_ISO_C4")
#pragma pop_macro("I_ISO_C5")
#pragma pop_macro("I_ISO_C6")
#pragma pop_macro("I_ISO_C7")
#pragma pop_macro("I_ISO_C8")
#pragma pop_macro("I_ISO_C9")
#pragma pop_macro("I_ISO_DESIGNATED_LONG")
#pragma pop_macro("I_ITALY_ENVELOPE")
#pragma pop_macro("I_JIS_B0")
#pragma pop_macro("I_JIS_B1")
#pragma pop_macro("I_JIS_B10")
#pragma pop_macro("I_JIS_B2")
#pragma pop_macro("I_JIS_B3")
#pragma pop_macro("I_JIS_B4")
#pragma pop_macro("I_JIS_B5")
#pragma pop_macro("I_JIS_B6")
#pragma pop_macro("I_JIS_B7")
#pragma pop_macro("I_JIS_B8")
#pragma pop_macro("I_JIS_B9")
#pragma pop_macro("I_LEDGER")
#pragma pop_macro("I_MONARCH_ENVELOPE")
#pragma pop_macro("I_NA_6X9_ENVELOPE")
#pragma pop_macro("I_NA_7X9_ENVELOPE")
#pragma pop_macro("I_NA_9X11_ENVELOPE")
#pragma pop_macro("I_NA_9X12_ENVELOPE")
#pragma pop_macro("I_NA_LEGAL")
#pragma pop_macro("I_NA_LETTER")
#pragma pop_macro("I_NA_NUMBER_10_ENVELOPE")
#pragma pop_macro("I_NA_NUMBER_11_ENVELOPE")
#pragma pop_macro("I_NA_NUMBER_12_ENVELOPE")
#pragma pop_macro("I_NA_NUMBER_14_ENVELOPE")
#pragma pop_macro("I_NA_NUMBER_9_ENVELOPE")
#pragma pop_macro("I_PERSONAL_ENVELOPE")
#pragma pop_macro("I_QUARTO")
#pragma pop_macro("JIS_B0")
#pragma pop_macro("JIS_B1")
#pragma pop_macro("JIS_B10")
#pragma pop_macro("JIS_B2")
#pragma pop_macro("JIS_B3")
#pragma pop_macro("JIS_B4")
#pragma pop_macro("JIS_B5")
#pragma pop_macro("JIS_B6")
#pragma pop_macro("JIS_B7")
#pragma pop_macro("JIS_B8")
#pragma pop_macro("JIS_B9")
#pragma pop_macro("LEDGER")
#pragma pop_macro("LEGAL")
#pragma pop_macro("LETTER")
#pragma pop_macro("MONARCH")
#pragma pop_macro("MONARCH_ENVELOPE")
#pragma pop_macro("NAMES")
#pragma pop_macro("NA_6X9_ENVELOPE")
#pragma pop_macro("NA_7X9_ENVELOPE")
#pragma pop_macro("NA_9X11_ENVELOPE")
#pragma pop_macro("NA_9X12_ENVELOPE")
#pragma pop_macro("NA_LEGAL")
#pragma pop_macro("NA_LETTER")
#pragma pop_macro("NA_NUMBER_10_ENVELOPE")
#pragma pop_macro("NA_NUMBER_11_ENVELOPE")
#pragma pop_macro("NA_NUMBER_12_ENVELOPE")
#pragma pop_macro("NA_NUMBER_14_ENVELOPE")
#pragma pop_macro("NA_NUMBER_9_ENVELOPE")
#pragma pop_macro("NOTE")
#pragma pop_macro("PERSONAL")
#pragma pop_macro("PERSONAL_ENVELOPE")
#pragma pop_macro("QUARTO")
#pragma pop_macro("STATEMENT")
#pragma pop_macro("TABLOID")

#endif // _java_awt_PageAttributes$MediaType_h_