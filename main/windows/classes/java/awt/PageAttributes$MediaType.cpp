#include <java/awt/PageAttributes$MediaType.h>

#include <java/awt/AttributeValue.h>
#include <java/awt/PageAttributes.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef A
#undef B
#undef C
#undef D
#undef E
#undef ENV_10
#undef ENV_11
#undef ENV_12
#undef ENV_14
#undef ENV_6X9
#undef ENV_7X9
#undef ENV_9
#undef ENV_9X11
#undef ENV_9X12
#undef ENV_INVITE
#undef ENV_ITALY
#undef ENV_MONARCH
#undef ENV_PERSONAL
#undef EXECUTIVE
#undef FOLIO
#undef INVITE
#undef INVITE_ENVELOPE
#undef INVOICE
#undef ISO_2A0
#undef ISO_4A0
#undef ISO_A0
#undef ISO_A1
#undef ISO_A10
#undef ISO_A2
#undef ISO_A3
#undef ISO_A4
#undef ISO_A5
#undef ISO_A6
#undef ISO_A7
#undef ISO_A8
#undef ISO_A9
#undef ISO_B0
#undef ISO_B1
#undef ISO_B10
#undef ISO_B2
#undef ISO_B3
#undef ISO_B4
#undef ISO_B4_ENVELOPE
#undef ISO_B5
#undef ISO_B5_ENVELOPE
#undef ISO_B6
#undef ISO_B7
#undef ISO_B8
#undef ISO_B9
#undef ISO_C0
#undef ISO_C0_ENVELOPE
#undef ISO_C1
#undef ISO_C10
#undef ISO_C10_ENVELOPE
#undef ISO_C1_ENVELOPE
#undef ISO_C2
#undef ISO_C2_ENVELOPE
#undef ISO_C3
#undef ISO_C3_ENVELOPE
#undef ISO_C4
#undef ISO_C4_ENVELOPE
#undef ISO_C5
#undef ISO_C5_ENVELOPE
#undef ISO_C6
#undef ISO_C6_ENVELOPE
#undef ISO_C7
#undef ISO_C7_ENVELOPE
#undef ISO_C8
#undef ISO_C8_ENVELOPE
#undef ISO_C9
#undef ISO_C9_ENVELOPE
#undef ISO_DESIGNATED_LONG
#undef ISO_DESIGNATED_LONG_ENVELOPE
#undef ITALY
#undef ITALY_ENVELOPE
#undef I_A
#undef I_B
#undef I_C
#undef I_D
#undef I_E
#undef I_EXECUTIVE
#undef I_FOLIO
#undef I_INVITE_ENVELOPE
#undef I_INVOICE
#undef I_ISO_2A0
#undef I_ISO_4A0
#undef I_ISO_A0
#undef I_ISO_A1
#undef I_ISO_A10
#undef I_ISO_A2
#undef I_ISO_A3
#undef I_ISO_A4
#undef I_ISO_A5
#undef I_ISO_A6
#undef I_ISO_A7
#undef I_ISO_A8
#undef I_ISO_A9
#undef I_ISO_B0
#undef I_ISO_B1
#undef I_ISO_B10
#undef I_ISO_B2
#undef I_ISO_B3
#undef I_ISO_B4
#undef I_ISO_B5
#undef I_ISO_B6
#undef I_ISO_B7
#undef I_ISO_B8
#undef I_ISO_B9
#undef I_ISO_C0
#undef I_ISO_C1
#undef I_ISO_C10
#undef I_ISO_C2
#undef I_ISO_C3
#undef I_ISO_C4
#undef I_ISO_C5
#undef I_ISO_C6
#undef I_ISO_C7
#undef I_ISO_C8
#undef I_ISO_C9
#undef I_ISO_DESIGNATED_LONG
#undef I_ITALY_ENVELOPE
#undef I_JIS_B0
#undef I_JIS_B1
#undef I_JIS_B10
#undef I_JIS_B2
#undef I_JIS_B3
#undef I_JIS_B4
#undef I_JIS_B5
#undef I_JIS_B6
#undef I_JIS_B7
#undef I_JIS_B8
#undef I_JIS_B9
#undef I_LEDGER
#undef I_MONARCH_ENVELOPE
#undef I_NA_6X9_ENVELOPE
#undef I_NA_7X9_ENVELOPE
#undef I_NA_9X11_ENVELOPE
#undef I_NA_9X12_ENVELOPE
#undef I_NA_LEGAL
#undef I_NA_LETTER
#undef I_NA_NUMBER_10_ENVELOPE
#undef I_NA_NUMBER_11_ENVELOPE
#undef I_NA_NUMBER_12_ENVELOPE
#undef I_NA_NUMBER_14_ENVELOPE
#undef I_NA_NUMBER_9_ENVELOPE
#undef I_PERSONAL_ENVELOPE
#undef I_QUARTO
#undef JIS_B0
#undef JIS_B1
#undef JIS_B10
#undef JIS_B2
#undef JIS_B3
#undef JIS_B4
#undef JIS_B5
#undef JIS_B6
#undef JIS_B7
#undef JIS_B8
#undef JIS_B9
#undef LEDGER
#undef LEGAL
#undef LETTER
#undef MONARCH
#undef MONARCH_ENVELOPE
#undef NAMES
#undef NA_6X9_ENVELOPE
#undef NA_7X9_ENVELOPE
#undef NA_9X11_ENVELOPE
#undef NA_9X12_ENVELOPE
#undef NA_LEGAL
#undef NA_LETTER
#undef NA_NUMBER_10_ENVELOPE
#undef NA_NUMBER_11_ENVELOPE
#undef NA_NUMBER_12_ENVELOPE
#undef NA_NUMBER_14_ENVELOPE
#undef NA_NUMBER_9_ENVELOPE
#undef NOTE
#undef PERSONAL
#undef PERSONAL_ENVELOPE
#undef QUARTO
#undef STATEMENT
#undef TABLOID

using $AttributeValue = ::java::awt::AttributeValue;
using $PageAttributes = ::java::awt::PageAttributes;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _PageAttributes$MediaType_FieldInfo_[] = {
	{"I_ISO_4A0", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_ISO_4A0)},
	{"I_ISO_2A0", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_ISO_2A0)},
	{"I_ISO_A0", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_ISO_A0)},
	{"I_ISO_A1", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_ISO_A1)},
	{"I_ISO_A2", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_ISO_A2)},
	{"I_ISO_A3", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_ISO_A3)},
	{"I_ISO_A4", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_ISO_A4)},
	{"I_ISO_A5", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_ISO_A5)},
	{"I_ISO_A6", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_ISO_A6)},
	{"I_ISO_A7", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_ISO_A7)},
	{"I_ISO_A8", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_ISO_A8)},
	{"I_ISO_A9", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_ISO_A9)},
	{"I_ISO_A10", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_ISO_A10)},
	{"I_ISO_B0", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_ISO_B0)},
	{"I_ISO_B1", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_ISO_B1)},
	{"I_ISO_B2", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_ISO_B2)},
	{"I_ISO_B3", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_ISO_B3)},
	{"I_ISO_B4", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_ISO_B4)},
	{"I_ISO_B5", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_ISO_B5)},
	{"I_ISO_B6", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_ISO_B6)},
	{"I_ISO_B7", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_ISO_B7)},
	{"I_ISO_B8", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_ISO_B8)},
	{"I_ISO_B9", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_ISO_B9)},
	{"I_ISO_B10", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_ISO_B10)},
	{"I_JIS_B0", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_JIS_B0)},
	{"I_JIS_B1", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_JIS_B1)},
	{"I_JIS_B2", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_JIS_B2)},
	{"I_JIS_B3", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_JIS_B3)},
	{"I_JIS_B4", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_JIS_B4)},
	{"I_JIS_B5", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_JIS_B5)},
	{"I_JIS_B6", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_JIS_B6)},
	{"I_JIS_B7", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_JIS_B7)},
	{"I_JIS_B8", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_JIS_B8)},
	{"I_JIS_B9", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_JIS_B9)},
	{"I_JIS_B10", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_JIS_B10)},
	{"I_ISO_C0", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_ISO_C0)},
	{"I_ISO_C1", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_ISO_C1)},
	{"I_ISO_C2", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_ISO_C2)},
	{"I_ISO_C3", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_ISO_C3)},
	{"I_ISO_C4", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_ISO_C4)},
	{"I_ISO_C5", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_ISO_C5)},
	{"I_ISO_C6", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_ISO_C6)},
	{"I_ISO_C7", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_ISO_C7)},
	{"I_ISO_C8", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_ISO_C8)},
	{"I_ISO_C9", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_ISO_C9)},
	{"I_ISO_C10", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_ISO_C10)},
	{"I_ISO_DESIGNATED_LONG", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_ISO_DESIGNATED_LONG)},
	{"I_EXECUTIVE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_EXECUTIVE)},
	{"I_FOLIO", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_FOLIO)},
	{"I_INVOICE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_INVOICE)},
	{"I_LEDGER", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_LEDGER)},
	{"I_NA_LETTER", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_NA_LETTER)},
	{"I_NA_LEGAL", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_NA_LEGAL)},
	{"I_QUARTO", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_QUARTO)},
	{"I_A", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_A)},
	{"I_B", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_B)},
	{"I_C", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_C)},
	{"I_D", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_D)},
	{"I_E", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_E)},
	{"I_NA_10X15_ENVELOPE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_NA_10X15_ENVELOPE)},
	{"I_NA_10X14_ENVELOPE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_NA_10X14_ENVELOPE)},
	{"I_NA_10X13_ENVELOPE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_NA_10X13_ENVELOPE)},
	{"I_NA_9X12_ENVELOPE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_NA_9X12_ENVELOPE)},
	{"I_NA_9X11_ENVELOPE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_NA_9X11_ENVELOPE)},
	{"I_NA_7X9_ENVELOPE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_NA_7X9_ENVELOPE)},
	{"I_NA_6X9_ENVELOPE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_NA_6X9_ENVELOPE)},
	{"I_NA_NUMBER_9_ENVELOPE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_NA_NUMBER_9_ENVELOPE)},
	{"I_NA_NUMBER_10_ENVELOPE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_NA_NUMBER_10_ENVELOPE)},
	{"I_NA_NUMBER_11_ENVELOPE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_NA_NUMBER_11_ENVELOPE)},
	{"I_NA_NUMBER_12_ENVELOPE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_NA_NUMBER_12_ENVELOPE)},
	{"I_NA_NUMBER_14_ENVELOPE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_NA_NUMBER_14_ENVELOPE)},
	{"I_INVITE_ENVELOPE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_INVITE_ENVELOPE)},
	{"I_ITALY_ENVELOPE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_ITALY_ENVELOPE)},
	{"I_MONARCH_ENVELOPE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_MONARCH_ENVELOPE)},
	{"I_PERSONAL_ENVELOPE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PageAttributes$MediaType, I_PERSONAL_ENVELOPE)},
	{"NAMES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, NAMES)},
	{"ISO_4A0", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ISO_4A0)},
	{"ISO_2A0", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ISO_2A0)},
	{"ISO_A0", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ISO_A0)},
	{"ISO_A1", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ISO_A1)},
	{"ISO_A2", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ISO_A2)},
	{"ISO_A3", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ISO_A3)},
	{"ISO_A4", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ISO_A4)},
	{"ISO_A5", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ISO_A5)},
	{"ISO_A6", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ISO_A6)},
	{"ISO_A7", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ISO_A7)},
	{"ISO_A8", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ISO_A8)},
	{"ISO_A9", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ISO_A9)},
	{"ISO_A10", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ISO_A10)},
	{"ISO_B0", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ISO_B0)},
	{"ISO_B1", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ISO_B1)},
	{"ISO_B2", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ISO_B2)},
	{"ISO_B3", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ISO_B3)},
	{"ISO_B4", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ISO_B4)},
	{"ISO_B5", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ISO_B5)},
	{"ISO_B6", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ISO_B6)},
	{"ISO_B7", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ISO_B7)},
	{"ISO_B8", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ISO_B8)},
	{"ISO_B9", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ISO_B9)},
	{"ISO_B10", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ISO_B10)},
	{"JIS_B0", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, JIS_B0)},
	{"JIS_B1", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, JIS_B1)},
	{"JIS_B2", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, JIS_B2)},
	{"JIS_B3", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, JIS_B3)},
	{"JIS_B4", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, JIS_B4)},
	{"JIS_B5", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, JIS_B5)},
	{"JIS_B6", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, JIS_B6)},
	{"JIS_B7", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, JIS_B7)},
	{"JIS_B8", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, JIS_B8)},
	{"JIS_B9", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, JIS_B9)},
	{"JIS_B10", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, JIS_B10)},
	{"ISO_C0", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ISO_C0)},
	{"ISO_C1", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ISO_C1)},
	{"ISO_C2", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ISO_C2)},
	{"ISO_C3", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ISO_C3)},
	{"ISO_C4", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ISO_C4)},
	{"ISO_C5", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ISO_C5)},
	{"ISO_C6", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ISO_C6)},
	{"ISO_C7", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ISO_C7)},
	{"ISO_C8", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ISO_C8)},
	{"ISO_C9", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ISO_C9)},
	{"ISO_C10", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ISO_C10)},
	{"ISO_DESIGNATED_LONG", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ISO_DESIGNATED_LONG)},
	{"EXECUTIVE", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, EXECUTIVE)},
	{"FOLIO", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, FOLIO)},
	{"INVOICE", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, INVOICE)},
	{"LEDGER", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, LEDGER)},
	{"NA_LETTER", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, NA_LETTER)},
	{"NA_LEGAL", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, NA_LEGAL)},
	{"QUARTO", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, QUARTO)},
	{"A", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, A)},
	{"B", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, B)},
	{"C", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, C)},
	{"D", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, D)},
	{"E", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, E)},
	{"NA_10X15_ENVELOPE", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, NA_10X15_ENVELOPE)},
	{"NA_10X14_ENVELOPE", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, NA_10X14_ENVELOPE)},
	{"NA_10X13_ENVELOPE", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, NA_10X13_ENVELOPE)},
	{"NA_9X12_ENVELOPE", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, NA_9X12_ENVELOPE)},
	{"NA_9X11_ENVELOPE", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, NA_9X11_ENVELOPE)},
	{"NA_7X9_ENVELOPE", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, NA_7X9_ENVELOPE)},
	{"NA_6X9_ENVELOPE", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, NA_6X9_ENVELOPE)},
	{"NA_NUMBER_9_ENVELOPE", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, NA_NUMBER_9_ENVELOPE)},
	{"NA_NUMBER_10_ENVELOPE", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, NA_NUMBER_10_ENVELOPE)},
	{"NA_NUMBER_11_ENVELOPE", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, NA_NUMBER_11_ENVELOPE)},
	{"NA_NUMBER_12_ENVELOPE", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, NA_NUMBER_12_ENVELOPE)},
	{"NA_NUMBER_14_ENVELOPE", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, NA_NUMBER_14_ENVELOPE)},
	{"INVITE_ENVELOPE", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, INVITE_ENVELOPE)},
	{"ITALY_ENVELOPE", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ITALY_ENVELOPE)},
	{"MONARCH_ENVELOPE", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, MONARCH_ENVELOPE)},
	{"PERSONAL_ENVELOPE", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, PERSONAL_ENVELOPE)},
	{"A0", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, A0)},
	{"A1", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, A1)},
	{"A2", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, A2)},
	{"A3", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, A3)},
	{"A4", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, A4)},
	{"A5", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, A5)},
	{"A6", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, A6)},
	{"A7", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, A7)},
	{"A8", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, A8)},
	{"A9", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, A9)},
	{"A10", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, A10)},
	{"B0", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, B0)},
	{"B1", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, B1)},
	{"B2", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, B2)},
	{"B3", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, B3)},
	{"B4", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, B4)},
	{"ISO_B4_ENVELOPE", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ISO_B4_ENVELOPE)},
	{"B5", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, B5)},
	{"ISO_B5_ENVELOPE", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ISO_B5_ENVELOPE)},
	{"B6", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, B6)},
	{"B7", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, B7)},
	{"B8", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, B8)},
	{"B9", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, B9)},
	{"B10", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, B10)},
	{"C0", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, C0)},
	{"ISO_C0_ENVELOPE", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ISO_C0_ENVELOPE)},
	{"C1", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, C1)},
	{"ISO_C1_ENVELOPE", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ISO_C1_ENVELOPE)},
	{"C2", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, C2)},
	{"ISO_C2_ENVELOPE", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ISO_C2_ENVELOPE)},
	{"C3", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, C3)},
	{"ISO_C3_ENVELOPE", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ISO_C3_ENVELOPE)},
	{"C4", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, C4)},
	{"ISO_C4_ENVELOPE", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ISO_C4_ENVELOPE)},
	{"C5", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, C5)},
	{"ISO_C5_ENVELOPE", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ISO_C5_ENVELOPE)},
	{"C6", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, C6)},
	{"ISO_C6_ENVELOPE", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ISO_C6_ENVELOPE)},
	{"C7", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, C7)},
	{"ISO_C7_ENVELOPE", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ISO_C7_ENVELOPE)},
	{"C8", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, C8)},
	{"ISO_C8_ENVELOPE", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ISO_C8_ENVELOPE)},
	{"C9", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, C9)},
	{"ISO_C9_ENVELOPE", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ISO_C9_ENVELOPE)},
	{"C10", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, C10)},
	{"ISO_C10_ENVELOPE", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ISO_C10_ENVELOPE)},
	{"ISO_DESIGNATED_LONG_ENVELOPE", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ISO_DESIGNATED_LONG_ENVELOPE)},
	{"STATEMENT", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, STATEMENT)},
	{"TABLOID", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, TABLOID)},
	{"LETTER", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, LETTER)},
	{"NOTE", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, NOTE)},
	{"LEGAL", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, LEGAL)},
	{"ENV_10X15", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ENV_10X15)},
	{"ENV_10X14", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ENV_10X14)},
	{"ENV_10X13", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ENV_10X13)},
	{"ENV_9X12", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ENV_9X12)},
	{"ENV_9X11", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ENV_9X11)},
	{"ENV_7X9", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ENV_7X9)},
	{"ENV_6X9", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ENV_6X9)},
	{"ENV_9", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ENV_9)},
	{"ENV_10", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ENV_10)},
	{"ENV_11", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ENV_11)},
	{"ENV_12", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ENV_12)},
	{"ENV_14", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ENV_14)},
	{"ENV_INVITE", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ENV_INVITE)},
	{"ENV_ITALY", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ENV_ITALY)},
	{"ENV_MONARCH", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ENV_MONARCH)},
	{"ENV_PERSONAL", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ENV_PERSONAL)},
	{"INVITE", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, INVITE)},
	{"ITALY", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, ITALY)},
	{"MONARCH", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, MONARCH)},
	{"PERSONAL", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PageAttributes$MediaType, PERSONAL)},
	{}
};

$MethodInfo _PageAttributes$MediaType_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(PageAttributes$MediaType::*)(int32_t)>(&PageAttributes$MediaType::init$))},
	{"hashCode", "()I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _PageAttributes$MediaType_InnerClassesInfo_[] = {
	{"java.awt.PageAttributes$MediaType", "java.awt.PageAttributes", "MediaType", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _PageAttributes$MediaType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.awt.PageAttributes$MediaType",
	"java.awt.AttributeValue",
	nullptr,
	_PageAttributes$MediaType_FieldInfo_,
	_PageAttributes$MediaType_MethodInfo_,
	nullptr,
	nullptr,
	_PageAttributes$MediaType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.PageAttributes"
};

$Object* allocate$PageAttributes$MediaType($Class* clazz) {
	return $of($alloc(PageAttributes$MediaType));
}

$StringArray* PageAttributes$MediaType::NAMES = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ISO_4A0 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ISO_2A0 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ISO_A0 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ISO_A1 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ISO_A2 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ISO_A3 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ISO_A4 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ISO_A5 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ISO_A6 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ISO_A7 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ISO_A8 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ISO_A9 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ISO_A10 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ISO_B0 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ISO_B1 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ISO_B2 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ISO_B3 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ISO_B4 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ISO_B5 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ISO_B6 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ISO_B7 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ISO_B8 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ISO_B9 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ISO_B10 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::JIS_B0 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::JIS_B1 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::JIS_B2 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::JIS_B3 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::JIS_B4 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::JIS_B5 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::JIS_B6 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::JIS_B7 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::JIS_B8 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::JIS_B9 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::JIS_B10 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ISO_C0 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ISO_C1 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ISO_C2 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ISO_C3 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ISO_C4 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ISO_C5 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ISO_C6 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ISO_C7 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ISO_C8 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ISO_C9 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ISO_C10 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ISO_DESIGNATED_LONG = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::EXECUTIVE = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::FOLIO = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::INVOICE = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::LEDGER = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::NA_LETTER = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::NA_LEGAL = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::QUARTO = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::A = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::B = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::C = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::D = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::E = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::NA_10X15_ENVELOPE = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::NA_10X14_ENVELOPE = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::NA_10X13_ENVELOPE = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::NA_9X12_ENVELOPE = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::NA_9X11_ENVELOPE = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::NA_7X9_ENVELOPE = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::NA_6X9_ENVELOPE = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::NA_NUMBER_9_ENVELOPE = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::NA_NUMBER_10_ENVELOPE = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::NA_NUMBER_11_ENVELOPE = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::NA_NUMBER_12_ENVELOPE = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::NA_NUMBER_14_ENVELOPE = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::INVITE_ENVELOPE = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ITALY_ENVELOPE = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::MONARCH_ENVELOPE = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::PERSONAL_ENVELOPE = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::A0 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::A1 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::A2 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::A3 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::A4 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::A5 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::A6 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::A7 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::A8 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::A9 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::A10 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::B0 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::B1 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::B2 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::B3 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::B4 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ISO_B4_ENVELOPE = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::B5 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ISO_B5_ENVELOPE = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::B6 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::B7 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::B8 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::B9 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::B10 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::C0 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ISO_C0_ENVELOPE = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::C1 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ISO_C1_ENVELOPE = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::C2 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ISO_C2_ENVELOPE = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::C3 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ISO_C3_ENVELOPE = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::C4 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ISO_C4_ENVELOPE = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::C5 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ISO_C5_ENVELOPE = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::C6 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ISO_C6_ENVELOPE = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::C7 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ISO_C7_ENVELOPE = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::C8 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ISO_C8_ENVELOPE = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::C9 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ISO_C9_ENVELOPE = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::C10 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ISO_C10_ENVELOPE = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ISO_DESIGNATED_LONG_ENVELOPE = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::STATEMENT = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::TABLOID = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::LETTER = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::NOTE = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::LEGAL = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ENV_10X15 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ENV_10X14 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ENV_10X13 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ENV_9X12 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ENV_9X11 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ENV_7X9 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ENV_6X9 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ENV_9 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ENV_10 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ENV_11 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ENV_12 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ENV_14 = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ENV_INVITE = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ENV_ITALY = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ENV_MONARCH = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ENV_PERSONAL = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::INVITE = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::ITALY = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::MONARCH = nullptr;

PageAttributes$MediaType* PageAttributes$MediaType::PERSONAL = nullptr;

void PageAttributes$MediaType::init$(int32_t type) {
	$AttributeValue::init$(type, PageAttributes$MediaType::NAMES);
}

$String* PageAttributes$MediaType::toString() {
	return $AttributeValue::toString();
}

int32_t PageAttributes$MediaType::hashCode() {
	return $AttributeValue::hashCode();
}

void clinit$PageAttributes$MediaType($Class* class$) {
	$assignStatic(PageAttributes$MediaType::NAMES, $new($StringArray, {
		"iso-4a0"_s,
		"iso-2a0"_s,
		"iso-a0"_s,
		"iso-a1"_s,
		"iso-a2"_s,
		"iso-a3"_s,
		"iso-a4"_s,
		"iso-a5"_s,
		"iso-a6"_s,
		"iso-a7"_s,
		"iso-a8"_s,
		"iso-a9"_s,
		"iso-a10"_s,
		"iso-b0"_s,
		"iso-b1"_s,
		"iso-b2"_s,
		"iso-b3"_s,
		"iso-b4"_s,
		"iso-b5"_s,
		"iso-b6"_s,
		"iso-b7"_s,
		"iso-b8"_s,
		"iso-b9"_s,
		"iso-b10"_s,
		"jis-b0"_s,
		"jis-b1"_s,
		"jis-b2"_s,
		"jis-b3"_s,
		"jis-b4"_s,
		"jis-b5"_s,
		"jis-b6"_s,
		"jis-b7"_s,
		"jis-b8"_s,
		"jis-b9"_s,
		"jis-b10"_s,
		"iso-c0"_s,
		"iso-c1"_s,
		"iso-c2"_s,
		"iso-c3"_s,
		"iso-c4"_s,
		"iso-c5"_s,
		"iso-c6"_s,
		"iso-c7"_s,
		"iso-c8"_s,
		"iso-c9"_s,
		"iso-c10"_s,
		"iso-designated-long"_s,
		"executive"_s,
		"folio"_s,
		"invoice"_s,
		"ledger"_s,
		"na-letter"_s,
		"na-legal"_s,
		"quarto"_s,
		"a"_s,
		"b"_s,
		"c"_s,
		"d"_s,
		"e"_s,
		"na-10x15-envelope"_s,
		"na-10x14-envelope"_s,
		"na-10x13-envelope"_s,
		"na-9x12-envelope"_s,
		"na-9x11-envelope"_s,
		"na-7x9-envelope"_s,
		"na-6x9-envelope"_s,
		"na-number-9-envelope"_s,
		"na-number-10-envelope"_s,
		"na-number-11-envelope"_s,
		"na-number-12-envelope"_s,
		"na-number-14-envelope"_s,
		"invite-envelope"_s,
		"italy-envelope"_s,
		"monarch-envelope"_s,
		"personal-envelope"_s
	}));
	$assignStatic(PageAttributes$MediaType::ISO_4A0, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_ISO_4A0));
	$assignStatic(PageAttributes$MediaType::ISO_2A0, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_ISO_2A0));
	$assignStatic(PageAttributes$MediaType::ISO_A0, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_ISO_A0));
	$assignStatic(PageAttributes$MediaType::ISO_A1, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_ISO_A1));
	$assignStatic(PageAttributes$MediaType::ISO_A2, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_ISO_A2));
	$assignStatic(PageAttributes$MediaType::ISO_A3, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_ISO_A3));
	$assignStatic(PageAttributes$MediaType::ISO_A4, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_ISO_A4));
	$assignStatic(PageAttributes$MediaType::ISO_A5, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_ISO_A5));
	$assignStatic(PageAttributes$MediaType::ISO_A6, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_ISO_A6));
	$assignStatic(PageAttributes$MediaType::ISO_A7, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_ISO_A7));
	$assignStatic(PageAttributes$MediaType::ISO_A8, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_ISO_A8));
	$assignStatic(PageAttributes$MediaType::ISO_A9, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_ISO_A9));
	$assignStatic(PageAttributes$MediaType::ISO_A10, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_ISO_A10));
	$assignStatic(PageAttributes$MediaType::ISO_B0, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_ISO_B0));
	$assignStatic(PageAttributes$MediaType::ISO_B1, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_ISO_B1));
	$assignStatic(PageAttributes$MediaType::ISO_B2, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_ISO_B2));
	$assignStatic(PageAttributes$MediaType::ISO_B3, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_ISO_B3));
	$assignStatic(PageAttributes$MediaType::ISO_B4, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_ISO_B4));
	$assignStatic(PageAttributes$MediaType::ISO_B5, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_ISO_B5));
	$assignStatic(PageAttributes$MediaType::ISO_B6, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_ISO_B6));
	$assignStatic(PageAttributes$MediaType::ISO_B7, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_ISO_B7));
	$assignStatic(PageAttributes$MediaType::ISO_B8, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_ISO_B8));
	$assignStatic(PageAttributes$MediaType::ISO_B9, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_ISO_B9));
	$assignStatic(PageAttributes$MediaType::ISO_B10, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_ISO_B10));
	$assignStatic(PageAttributes$MediaType::JIS_B0, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_JIS_B0));
	$assignStatic(PageAttributes$MediaType::JIS_B1, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_JIS_B1));
	$assignStatic(PageAttributes$MediaType::JIS_B2, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_JIS_B2));
	$assignStatic(PageAttributes$MediaType::JIS_B3, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_JIS_B3));
	$assignStatic(PageAttributes$MediaType::JIS_B4, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_JIS_B4));
	$assignStatic(PageAttributes$MediaType::JIS_B5, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_JIS_B5));
	$assignStatic(PageAttributes$MediaType::JIS_B6, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_JIS_B6));
	$assignStatic(PageAttributes$MediaType::JIS_B7, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_JIS_B7));
	$assignStatic(PageAttributes$MediaType::JIS_B8, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_JIS_B8));
	$assignStatic(PageAttributes$MediaType::JIS_B9, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_JIS_B9));
	$assignStatic(PageAttributes$MediaType::JIS_B10, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_JIS_B10));
	$assignStatic(PageAttributes$MediaType::ISO_C0, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_ISO_C0));
	$assignStatic(PageAttributes$MediaType::ISO_C1, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_ISO_C1));
	$assignStatic(PageAttributes$MediaType::ISO_C2, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_ISO_C2));
	$assignStatic(PageAttributes$MediaType::ISO_C3, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_ISO_C3));
	$assignStatic(PageAttributes$MediaType::ISO_C4, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_ISO_C4));
	$assignStatic(PageAttributes$MediaType::ISO_C5, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_ISO_C5));
	$assignStatic(PageAttributes$MediaType::ISO_C6, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_ISO_C6));
	$assignStatic(PageAttributes$MediaType::ISO_C7, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_ISO_C7));
	$assignStatic(PageAttributes$MediaType::ISO_C8, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_ISO_C8));
	$assignStatic(PageAttributes$MediaType::ISO_C9, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_ISO_C9));
	$assignStatic(PageAttributes$MediaType::ISO_C10, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_ISO_C10));
	$assignStatic(PageAttributes$MediaType::ISO_DESIGNATED_LONG, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_ISO_DESIGNATED_LONG));
	$assignStatic(PageAttributes$MediaType::EXECUTIVE, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_EXECUTIVE));
	$assignStatic(PageAttributes$MediaType::FOLIO, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_FOLIO));
	$assignStatic(PageAttributes$MediaType::INVOICE, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_INVOICE));
	$assignStatic(PageAttributes$MediaType::LEDGER, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_LEDGER));
	$assignStatic(PageAttributes$MediaType::NA_LETTER, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_NA_LETTER));
	$assignStatic(PageAttributes$MediaType::NA_LEGAL, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_NA_LEGAL));
	$assignStatic(PageAttributes$MediaType::QUARTO, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_QUARTO));
	$assignStatic(PageAttributes$MediaType::A, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_A));
	$assignStatic(PageAttributes$MediaType::B, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_B));
	$assignStatic(PageAttributes$MediaType::C, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_C));
	$assignStatic(PageAttributes$MediaType::D, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_D));
	$assignStatic(PageAttributes$MediaType::E, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_E));
	$assignStatic(PageAttributes$MediaType::NA_10X15_ENVELOPE, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_NA_10X15_ENVELOPE));
	$assignStatic(PageAttributes$MediaType::NA_10X14_ENVELOPE, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_NA_10X14_ENVELOPE));
	$assignStatic(PageAttributes$MediaType::NA_10X13_ENVELOPE, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_NA_10X13_ENVELOPE));
	$assignStatic(PageAttributes$MediaType::NA_9X12_ENVELOPE, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_NA_9X12_ENVELOPE));
	$assignStatic(PageAttributes$MediaType::NA_9X11_ENVELOPE, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_NA_9X11_ENVELOPE));
	$assignStatic(PageAttributes$MediaType::NA_7X9_ENVELOPE, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_NA_7X9_ENVELOPE));
	$assignStatic(PageAttributes$MediaType::NA_6X9_ENVELOPE, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_NA_6X9_ENVELOPE));
	$assignStatic(PageAttributes$MediaType::NA_NUMBER_9_ENVELOPE, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_NA_NUMBER_9_ENVELOPE));
	$assignStatic(PageAttributes$MediaType::NA_NUMBER_10_ENVELOPE, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_NA_NUMBER_10_ENVELOPE));
	$assignStatic(PageAttributes$MediaType::NA_NUMBER_11_ENVELOPE, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_NA_NUMBER_11_ENVELOPE));
	$assignStatic(PageAttributes$MediaType::NA_NUMBER_12_ENVELOPE, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_NA_NUMBER_12_ENVELOPE));
	$assignStatic(PageAttributes$MediaType::NA_NUMBER_14_ENVELOPE, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_NA_NUMBER_14_ENVELOPE));
	$assignStatic(PageAttributes$MediaType::INVITE_ENVELOPE, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_INVITE_ENVELOPE));
	$assignStatic(PageAttributes$MediaType::ITALY_ENVELOPE, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_ITALY_ENVELOPE));
	$assignStatic(PageAttributes$MediaType::MONARCH_ENVELOPE, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_MONARCH_ENVELOPE));
	$assignStatic(PageAttributes$MediaType::PERSONAL_ENVELOPE, $new(PageAttributes$MediaType, PageAttributes$MediaType::I_PERSONAL_ENVELOPE));
	$assignStatic(PageAttributes$MediaType::A0, PageAttributes$MediaType::ISO_A0);
	$assignStatic(PageAttributes$MediaType::A1, PageAttributes$MediaType::ISO_A1);
	$assignStatic(PageAttributes$MediaType::A2, PageAttributes$MediaType::ISO_A2);
	$assignStatic(PageAttributes$MediaType::A3, PageAttributes$MediaType::ISO_A3);
	$assignStatic(PageAttributes$MediaType::A4, PageAttributes$MediaType::ISO_A4);
	$assignStatic(PageAttributes$MediaType::A5, PageAttributes$MediaType::ISO_A5);
	$assignStatic(PageAttributes$MediaType::A6, PageAttributes$MediaType::ISO_A6);
	$assignStatic(PageAttributes$MediaType::A7, PageAttributes$MediaType::ISO_A7);
	$assignStatic(PageAttributes$MediaType::A8, PageAttributes$MediaType::ISO_A8);
	$assignStatic(PageAttributes$MediaType::A9, PageAttributes$MediaType::ISO_A9);
	$assignStatic(PageAttributes$MediaType::A10, PageAttributes$MediaType::ISO_A10);
	$assignStatic(PageAttributes$MediaType::B0, PageAttributes$MediaType::ISO_B0);
	$assignStatic(PageAttributes$MediaType::B1, PageAttributes$MediaType::ISO_B1);
	$assignStatic(PageAttributes$MediaType::B2, PageAttributes$MediaType::ISO_B2);
	$assignStatic(PageAttributes$MediaType::B3, PageAttributes$MediaType::ISO_B3);
	$assignStatic(PageAttributes$MediaType::B4, PageAttributes$MediaType::ISO_B4);
	$assignStatic(PageAttributes$MediaType::ISO_B4_ENVELOPE, PageAttributes$MediaType::ISO_B4);
	$assignStatic(PageAttributes$MediaType::B5, PageAttributes$MediaType::ISO_B5);
	$assignStatic(PageAttributes$MediaType::ISO_B5_ENVELOPE, PageAttributes$MediaType::ISO_B5);
	$assignStatic(PageAttributes$MediaType::B6, PageAttributes$MediaType::ISO_B6);
	$assignStatic(PageAttributes$MediaType::B7, PageAttributes$MediaType::ISO_B7);
	$assignStatic(PageAttributes$MediaType::B8, PageAttributes$MediaType::ISO_B8);
	$assignStatic(PageAttributes$MediaType::B9, PageAttributes$MediaType::ISO_B9);
	$assignStatic(PageAttributes$MediaType::B10, PageAttributes$MediaType::ISO_B10);
	$assignStatic(PageAttributes$MediaType::C0, PageAttributes$MediaType::ISO_C0);
	$assignStatic(PageAttributes$MediaType::ISO_C0_ENVELOPE, PageAttributes$MediaType::ISO_C0);
	$assignStatic(PageAttributes$MediaType::C1, PageAttributes$MediaType::ISO_C1);
	$assignStatic(PageAttributes$MediaType::ISO_C1_ENVELOPE, PageAttributes$MediaType::ISO_C1);
	$assignStatic(PageAttributes$MediaType::C2, PageAttributes$MediaType::ISO_C2);
	$assignStatic(PageAttributes$MediaType::ISO_C2_ENVELOPE, PageAttributes$MediaType::ISO_C2);
	$assignStatic(PageAttributes$MediaType::C3, PageAttributes$MediaType::ISO_C3);
	$assignStatic(PageAttributes$MediaType::ISO_C3_ENVELOPE, PageAttributes$MediaType::ISO_C3);
	$assignStatic(PageAttributes$MediaType::C4, PageAttributes$MediaType::ISO_C4);
	$assignStatic(PageAttributes$MediaType::ISO_C4_ENVELOPE, PageAttributes$MediaType::ISO_C4);
	$assignStatic(PageAttributes$MediaType::C5, PageAttributes$MediaType::ISO_C5);
	$assignStatic(PageAttributes$MediaType::ISO_C5_ENVELOPE, PageAttributes$MediaType::ISO_C5);
	$assignStatic(PageAttributes$MediaType::C6, PageAttributes$MediaType::ISO_C6);
	$assignStatic(PageAttributes$MediaType::ISO_C6_ENVELOPE, PageAttributes$MediaType::ISO_C6);
	$assignStatic(PageAttributes$MediaType::C7, PageAttributes$MediaType::ISO_C7);
	$assignStatic(PageAttributes$MediaType::ISO_C7_ENVELOPE, PageAttributes$MediaType::ISO_C7);
	$assignStatic(PageAttributes$MediaType::C8, PageAttributes$MediaType::ISO_C8);
	$assignStatic(PageAttributes$MediaType::ISO_C8_ENVELOPE, PageAttributes$MediaType::ISO_C8);
	$assignStatic(PageAttributes$MediaType::C9, PageAttributes$MediaType::ISO_C9);
	$assignStatic(PageAttributes$MediaType::ISO_C9_ENVELOPE, PageAttributes$MediaType::ISO_C9);
	$assignStatic(PageAttributes$MediaType::C10, PageAttributes$MediaType::ISO_C10);
	$assignStatic(PageAttributes$MediaType::ISO_C10_ENVELOPE, PageAttributes$MediaType::ISO_C10);
	$assignStatic(PageAttributes$MediaType::ISO_DESIGNATED_LONG_ENVELOPE, PageAttributes$MediaType::ISO_DESIGNATED_LONG);
	$assignStatic(PageAttributes$MediaType::STATEMENT, PageAttributes$MediaType::INVOICE);
	$assignStatic(PageAttributes$MediaType::TABLOID, PageAttributes$MediaType::LEDGER);
	$assignStatic(PageAttributes$MediaType::LETTER, PageAttributes$MediaType::NA_LETTER);
	$assignStatic(PageAttributes$MediaType::NOTE, PageAttributes$MediaType::NA_LETTER);
	$assignStatic(PageAttributes$MediaType::LEGAL, PageAttributes$MediaType::NA_LEGAL);
	$assignStatic(PageAttributes$MediaType::ENV_10X15, PageAttributes$MediaType::NA_10X15_ENVELOPE);
	$assignStatic(PageAttributes$MediaType::ENV_10X14, PageAttributes$MediaType::NA_10X14_ENVELOPE);
	$assignStatic(PageAttributes$MediaType::ENV_10X13, PageAttributes$MediaType::NA_10X13_ENVELOPE);
	$assignStatic(PageAttributes$MediaType::ENV_9X12, PageAttributes$MediaType::NA_9X12_ENVELOPE);
	$assignStatic(PageAttributes$MediaType::ENV_9X11, PageAttributes$MediaType::NA_9X11_ENVELOPE);
	$assignStatic(PageAttributes$MediaType::ENV_7X9, PageAttributes$MediaType::NA_7X9_ENVELOPE);
	$assignStatic(PageAttributes$MediaType::ENV_6X9, PageAttributes$MediaType::NA_6X9_ENVELOPE);
	$assignStatic(PageAttributes$MediaType::ENV_9, PageAttributes$MediaType::NA_NUMBER_9_ENVELOPE);
	$assignStatic(PageAttributes$MediaType::ENV_10, PageAttributes$MediaType::NA_NUMBER_10_ENVELOPE);
	$assignStatic(PageAttributes$MediaType::ENV_11, PageAttributes$MediaType::NA_NUMBER_11_ENVELOPE);
	$assignStatic(PageAttributes$MediaType::ENV_12, PageAttributes$MediaType::NA_NUMBER_12_ENVELOPE);
	$assignStatic(PageAttributes$MediaType::ENV_14, PageAttributes$MediaType::NA_NUMBER_14_ENVELOPE);
	$assignStatic(PageAttributes$MediaType::ENV_INVITE, PageAttributes$MediaType::INVITE_ENVELOPE);
	$assignStatic(PageAttributes$MediaType::ENV_ITALY, PageAttributes$MediaType::ITALY_ENVELOPE);
	$assignStatic(PageAttributes$MediaType::ENV_MONARCH, PageAttributes$MediaType::MONARCH_ENVELOPE);
	$assignStatic(PageAttributes$MediaType::ENV_PERSONAL, PageAttributes$MediaType::PERSONAL_ENVELOPE);
	$assignStatic(PageAttributes$MediaType::INVITE, PageAttributes$MediaType::INVITE_ENVELOPE);
	$assignStatic(PageAttributes$MediaType::ITALY, PageAttributes$MediaType::ITALY_ENVELOPE);
	$assignStatic(PageAttributes$MediaType::MONARCH, PageAttributes$MediaType::MONARCH_ENVELOPE);
	$assignStatic(PageAttributes$MediaType::PERSONAL, PageAttributes$MediaType::PERSONAL_ENVELOPE);
}

PageAttributes$MediaType::PageAttributes$MediaType() {
}

$Class* PageAttributes$MediaType::load$($String* name, bool initialize) {
	$loadClass(PageAttributes$MediaType, name, initialize, &_PageAttributes$MediaType_ClassInfo_, clinit$PageAttributes$MediaType, allocate$PageAttributes$MediaType);
	return class$;
}

$Class* PageAttributes$MediaType::class$ = nullptr;

	} // awt
} // java