#include <javax/swing/text/rtf/RTFReader$DiscardingDestination.h>

#include <java/util/Dictionary.h>
#include <javax/swing/text/rtf/RTFReader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Dictionary = ::java::util::Dictionary;
using $RTFReader = ::javax::swing::text::rtf::RTFReader;

namespace javax {
	namespace swing {
		namespace text {
			namespace rtf {

$FieldInfo _RTFReader$DiscardingDestination_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/rtf/RTFReader;", nullptr, $FINAL | $SYNTHETIC, $field(RTFReader$DiscardingDestination, this$0)},
	{}
};

$MethodInfo _RTFReader$DiscardingDestination_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/rtf/RTFReader;)V", nullptr, 0, $method(static_cast<void(RTFReader$DiscardingDestination::*)($RTFReader*)>(&RTFReader$DiscardingDestination::init$))},
	{"begingroup", "()V", nullptr, $PUBLIC},
	{"close", "()V", nullptr, $PUBLIC},
	{"endgroup", "(Ljava/util/Dictionary;)V", "(Ljava/util/Dictionary<Ljava/lang/Object;Ljava/lang/Object;>;)V", $PUBLIC},
	{"handleBinaryBlob", "([B)V", nullptr, $PUBLIC},
	{"handleKeyword", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"handleKeyword", "(Ljava/lang/String;I)Z", nullptr, $PUBLIC},
	{"handleText", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _RTFReader$DiscardingDestination_InnerClassesInfo_[] = {
	{"javax.swing.text.rtf.RTFReader$DiscardingDestination", "javax.swing.text.rtf.RTFReader", "DiscardingDestination", 0},
	{"javax.swing.text.rtf.RTFReader$Destination", "javax.swing.text.rtf.RTFReader", "Destination", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _RTFReader$DiscardingDestination_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.rtf.RTFReader$DiscardingDestination",
	"java.lang.Object",
	"javax.swing.text.rtf.RTFReader$Destination",
	_RTFReader$DiscardingDestination_FieldInfo_,
	_RTFReader$DiscardingDestination_MethodInfo_,
	nullptr,
	nullptr,
	_RTFReader$DiscardingDestination_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.rtf.RTFReader"
};

$Object* allocate$RTFReader$DiscardingDestination($Class* clazz) {
	return $of($alloc(RTFReader$DiscardingDestination));
}

void RTFReader$DiscardingDestination::init$($RTFReader* this$0) {
	$set(this, this$0, this$0);
}

void RTFReader$DiscardingDestination::handleBinaryBlob($bytes* data) {
}

void RTFReader$DiscardingDestination::handleText($String* text) {
}

bool RTFReader$DiscardingDestination::handleKeyword($String* text) {
	return true;
}

bool RTFReader$DiscardingDestination::handleKeyword($String* text, int32_t parameter) {
	return true;
}

void RTFReader$DiscardingDestination::begingroup() {
}

void RTFReader$DiscardingDestination::endgroup($Dictionary* oldState) {
}

void RTFReader$DiscardingDestination::close() {
}

RTFReader$DiscardingDestination::RTFReader$DiscardingDestination() {
}

$Class* RTFReader$DiscardingDestination::load$($String* name, bool initialize) {
	$loadClass(RTFReader$DiscardingDestination, name, initialize, &_RTFReader$DiscardingDestination_ClassInfo_, allocate$RTFReader$DiscardingDestination);
	return class$;
}

$Class* RTFReader$DiscardingDestination::class$ = nullptr;

			} // rtf
		} // text
	} // swing
} // javax