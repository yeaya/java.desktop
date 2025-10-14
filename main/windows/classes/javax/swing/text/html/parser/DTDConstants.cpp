#include <javax/swing/text/html/parser/DTDConstants.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef ANY
#undef CDATA
#undef CONREF
#undef CURRENT
#undef DEFAULT
#undef EMPTY
#undef ENDTAG
#undef ENTITIES
#undef ENTITY
#undef FIXED
#undef GENERAL
#undef ID
#undef IDREF
#undef IDREFS
#undef IMPLIED
#undef MD
#undef MODEL
#undef MS
#undef NAME
#undef NAMES
#undef NMTOKEN
#undef NMTOKENS
#undef NOTATION
#undef NUMBER
#undef NUMBERS
#undef NUTOKEN
#undef NUTOKENS
#undef PARAMETER
#undef PI
#undef PUBLIC
#undef RCDATA
#undef REQUIRED
#undef SDATA
#undef STARTTAG
#undef SYSTEM

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				namespace parser {

$FieldInfo _DTDConstants_FieldInfo_[] = {
	{"CDATA", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTDConstants, CDATA)},
	{"ENTITY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTDConstants, ENTITY)},
	{"ENTITIES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTDConstants, ENTITIES)},
	{"ID", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTDConstants, ID)},
	{"IDREF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTDConstants, IDREF)},
	{"IDREFS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTDConstants, IDREFS)},
	{"NAME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTDConstants, NAME)},
	{"NAMES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTDConstants, NAMES)},
	{"NMTOKEN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTDConstants, NMTOKEN)},
	{"NMTOKENS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTDConstants, NMTOKENS)},
	{"NOTATION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTDConstants, NOTATION)},
	{"NUMBER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTDConstants, NUMBER)},
	{"NUMBERS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTDConstants, NUMBERS)},
	{"NUTOKEN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTDConstants, NUTOKEN)},
	{"NUTOKENS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTDConstants, NUTOKENS)},
	{"RCDATA", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTDConstants, RCDATA)},
	{"EMPTY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTDConstants, EMPTY)},
	{"MODEL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTDConstants, MODEL)},
	{"ANY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTDConstants, ANY)},
	{"FIXED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTDConstants, FIXED)},
	{"REQUIRED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTDConstants, REQUIRED)},
	{"CURRENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTDConstants, CURRENT)},
	{"CONREF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTDConstants, CONREF)},
	{"IMPLIED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTDConstants, IMPLIED)},
	{"PUBLIC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTDConstants, PUBLIC)},
	{"SDATA", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTDConstants, SDATA)},
	{"PI", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTDConstants, PI)},
	{"STARTTAG", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTDConstants, STARTTAG)},
	{"ENDTAG", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTDConstants, ENDTAG)},
	{"MS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTDConstants, MS)},
	{"MD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTDConstants, MD)},
	{"SYSTEM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTDConstants, SYSTEM)},
	{"GENERAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTDConstants, GENERAL)},
	{"DEFAULT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTDConstants, DEFAULT)},
	{"PARAMETER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTDConstants, PARAMETER)},
	{}
};

$ClassInfo _DTDConstants_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.text.html.parser.DTDConstants",
	nullptr,
	nullptr,
	_DTDConstants_FieldInfo_
};

$Object* allocate$DTDConstants($Class* clazz) {
	return $of($alloc(DTDConstants));
}

$Class* DTDConstants::load$($String* name, bool initialize) {
	$loadClass(DTDConstants, name, initialize, &_DTDConstants_ClassInfo_, allocate$DTDConstants);
	return class$;
}

$Class* DTDConstants::class$ = nullptr;

				} // parser
			} // html
		} // text
	} // swing
} // javax