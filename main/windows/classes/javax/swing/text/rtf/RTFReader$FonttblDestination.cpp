#include <javax/swing/text/rtf/RTFReader$FonttblDestination.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Dictionary.h>
#include <java/util/Enumeration.h>
#include <javax/swing/text/rtf/RTFReader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Dictionary = ::java::util::Dictionary;
using $Enumeration = ::java::util::Enumeration;
using $RTFParser = ::javax::swing::text::rtf::RTFParser;
using $RTFReader = ::javax::swing::text::rtf::RTFReader;
using $RTFReader$Destination = ::javax::swing::text::rtf::RTFReader$Destination;

namespace javax {
	namespace swing {
		namespace text {
			namespace rtf {

$FieldInfo _RTFReader$FonttblDestination_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/rtf/RTFReader;", nullptr, $FINAL | $SYNTHETIC, $field(RTFReader$FonttblDestination, this$0)},
	{"nextFontNumber", "I", nullptr, 0, $field(RTFReader$FonttblDestination, nextFontNumber)},
	{"fontNumberKey", "Ljava/lang/Integer;", nullptr, 0, $field(RTFReader$FonttblDestination, fontNumberKey)},
	{"nextFontFamily", "Ljava/lang/String;", nullptr, 0, $field(RTFReader$FonttblDestination, nextFontFamily)},
	{}
};

$MethodInfo _RTFReader$FonttblDestination_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/rtf/RTFReader;)V", nullptr, 0, $method(static_cast<void(RTFReader$FonttblDestination::*)($RTFReader*)>(&RTFReader$FonttblDestination::init$))},
	{"begingroup", "()V", nullptr, $PUBLIC},
	{"close", "()V", nullptr, $PUBLIC},
	{"endgroup", "(Ljava/util/Dictionary;)V", "(Ljava/util/Dictionary<Ljava/lang/Object;Ljava/lang/Object;>;)V", $PUBLIC},
	{"handleBinaryBlob", "([B)V", nullptr, $PUBLIC},
	{"handleKeyword", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"handleKeyword", "(Ljava/lang/String;I)Z", nullptr, $PUBLIC},
	{"handleText", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _RTFReader$FonttblDestination_InnerClassesInfo_[] = {
	{"javax.swing.text.rtf.RTFReader$FonttblDestination", "javax.swing.text.rtf.RTFReader", "FonttblDestination", 0},
	{"javax.swing.text.rtf.RTFReader$Destination", "javax.swing.text.rtf.RTFReader", "Destination", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _RTFReader$FonttblDestination_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.rtf.RTFReader$FonttblDestination",
	"java.lang.Object",
	"javax.swing.text.rtf.RTFReader$Destination",
	_RTFReader$FonttblDestination_FieldInfo_,
	_RTFReader$FonttblDestination_MethodInfo_,
	nullptr,
	nullptr,
	_RTFReader$FonttblDestination_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.rtf.RTFReader"
};

$Object* allocate$RTFReader$FonttblDestination($Class* clazz) {
	return $of($alloc(RTFReader$FonttblDestination));
}

void RTFReader$FonttblDestination::init$($RTFReader* this$0) {
	$set(this, this$0, this$0);
	$set(this, fontNumberKey, nullptr);
}

void RTFReader$FonttblDestination::handleBinaryBlob($bytes* data) {
}

void RTFReader$FonttblDestination::handleText($String* text) {
	int32_t semicolon = $nc(text)->indexOf((int32_t)u';');
	$var($String, fontName, nullptr);
	if (semicolon > -1) {
		$assign(fontName, text->substring(0, semicolon));
	} else {
		$assign(fontName, text);
	}
	if (this->nextFontNumber == -1 && this->fontNumberKey != nullptr) {
		$assign(fontName, $str({$cast($String, $($nc(this->this$0->fontTable)->get(this->fontNumberKey))), fontName}));
	} else {
		$set(this, fontNumberKey, $Integer::valueOf(this->nextFontNumber));
	}
	$nc(this->this$0->fontTable)->put(this->fontNumberKey, fontName);
	this->nextFontNumber = -1;
	$set(this, nextFontFamily, nullptr);
}

bool RTFReader$FonttblDestination::handleKeyword($String* keyword) {
	if ($nc(keyword)->charAt(0) == u'f') {
		$set(this, nextFontFamily, keyword->substring(1));
		return true;
	}
	return false;
}

bool RTFReader$FonttblDestination::handleKeyword($String* keyword, int32_t parameter) {
	if ($nc(keyword)->equals("f"_s)) {
		this->nextFontNumber = parameter;
		return true;
	}
	return false;
}

void RTFReader$FonttblDestination::begingroup() {
}

void RTFReader$FonttblDestination::endgroup($Dictionary* oldState) {
}

void RTFReader$FonttblDestination::close() {
	$var($Enumeration, nums, $nc(this->this$0->fontTable)->keys());
	this->this$0->warning("Done reading font table."_s);
	while ($nc(nums)->hasMoreElements()) {
		$var($Integer, num, $cast($Integer, nums->nextElement()));
		$var($String, var$0, $$str({"Number "_s, num, ": "_s}));
		this->this$0->warning($$concat(var$0, $cast($String, $($nc(this->this$0->fontTable)->get(num)))));
	}
}

RTFReader$FonttblDestination::RTFReader$FonttblDestination() {
}

$Class* RTFReader$FonttblDestination::load$($String* name, bool initialize) {
	$loadClass(RTFReader$FonttblDestination, name, initialize, &_RTFReader$FonttblDestination_ClassInfo_, allocate$RTFReader$FonttblDestination);
	return class$;
}

$Class* RTFReader$FonttblDestination::class$ = nullptr;

			} // rtf
		} // text
	} // swing
} // javax