#include <javax/swing/text/rtf/RTFReader$InfoDestination.h>

#include <javax/swing/text/rtf/RTFReader$DiscardingDestination.h>
#include <javax/swing/text/rtf/RTFReader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RTFReader = ::javax::swing::text::rtf::RTFReader;
using $RTFReader$DiscardingDestination = ::javax::swing::text::rtf::RTFReader$DiscardingDestination;

namespace javax {
	namespace swing {
		namespace text {
			namespace rtf {

$FieldInfo _RTFReader$InfoDestination_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/rtf/RTFReader;", nullptr, $FINAL | $SYNTHETIC, $field(RTFReader$InfoDestination, this$0)},
	{}
};

$MethodInfo _RTFReader$InfoDestination_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/rtf/RTFReader;)V", nullptr, 0, $method(static_cast<void(RTFReader$InfoDestination::*)($RTFReader*)>(&RTFReader$InfoDestination::init$))},
	{}
};

$InnerClassInfo _RTFReader$InfoDestination_InnerClassesInfo_[] = {
	{"javax.swing.text.rtf.RTFReader$InfoDestination", "javax.swing.text.rtf.RTFReader", "InfoDestination", 0},
	{"javax.swing.text.rtf.RTFReader$DiscardingDestination", "javax.swing.text.rtf.RTFReader", "DiscardingDestination", 0},
	{}
};

$ClassInfo _RTFReader$InfoDestination_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.rtf.RTFReader$InfoDestination",
	"javax.swing.text.rtf.RTFReader$DiscardingDestination",
	nullptr,
	_RTFReader$InfoDestination_FieldInfo_,
	_RTFReader$InfoDestination_MethodInfo_,
	nullptr,
	nullptr,
	_RTFReader$InfoDestination_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.rtf.RTFReader"
};

$Object* allocate$RTFReader$InfoDestination($Class* clazz) {
	return $of($alloc(RTFReader$InfoDestination));
}

void RTFReader$InfoDestination::init$($RTFReader* this$0) {
	$set(this, this$0, this$0);
	$RTFReader$DiscardingDestination::init$(this$0);
}

RTFReader$InfoDestination::RTFReader$InfoDestination() {
}

$Class* RTFReader$InfoDestination::load$($String* name, bool initialize) {
	$loadClass(RTFReader$InfoDestination, name, initialize, &_RTFReader$InfoDestination_ClassInfo_, allocate$RTFReader$InfoDestination);
	return class$;
}

$Class* RTFReader$InfoDestination::class$ = nullptr;

			} // rtf
		} // text
	} // swing
} // javax