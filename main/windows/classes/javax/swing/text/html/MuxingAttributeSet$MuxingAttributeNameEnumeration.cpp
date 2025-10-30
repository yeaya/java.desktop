#include <javax/swing/text/html/MuxingAttributeSet$MuxingAttributeNameEnumeration.h>

#include <java/util/Enumeration.h>
#include <java/util/NoSuchElementException.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/html/MuxingAttributeSet.h>
#include <jcpp.h>

using $AttributeSetArray = $Array<::javax::swing::text::AttributeSet>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $MuxingAttributeSet = ::javax::swing::text::html::MuxingAttributeSet;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _MuxingAttributeSet$MuxingAttributeNameEnumeration_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/html/MuxingAttributeSet;", nullptr, $FINAL | $SYNTHETIC, $field(MuxingAttributeSet$MuxingAttributeNameEnumeration, this$0)},
	{"attrIndex", "I", nullptr, $PRIVATE, $field(MuxingAttributeSet$MuxingAttributeNameEnumeration, attrIndex)},
	{"currentEnum", "Ljava/util/Enumeration;", "Ljava/util/Enumeration<*>;", $PRIVATE, $field(MuxingAttributeSet$MuxingAttributeNameEnumeration, currentEnum)},
	{}
};

$MethodInfo _MuxingAttributeSet$MuxingAttributeNameEnumeration_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/html/MuxingAttributeSet;)V", nullptr, 0, $method(static_cast<void(MuxingAttributeSet$MuxingAttributeNameEnumeration::*)($MuxingAttributeSet*)>(&MuxingAttributeSet$MuxingAttributeNameEnumeration::init$))},
	{"hasMoreElements", "()Z", nullptr, $PUBLIC},
	{"nextElement", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"updateEnum", "()V", nullptr, 0},
	{}
};

$InnerClassInfo _MuxingAttributeSet$MuxingAttributeNameEnumeration_InnerClassesInfo_[] = {
	{"javax.swing.text.html.MuxingAttributeSet$MuxingAttributeNameEnumeration", "javax.swing.text.html.MuxingAttributeSet", "MuxingAttributeNameEnumeration", $PRIVATE},
	{}
};

$ClassInfo _MuxingAttributeSet$MuxingAttributeNameEnumeration_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.MuxingAttributeSet$MuxingAttributeNameEnumeration",
	"java.lang.Object",
	"java.util.Enumeration",
	_MuxingAttributeSet$MuxingAttributeNameEnumeration_FieldInfo_,
	_MuxingAttributeSet$MuxingAttributeNameEnumeration_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Enumeration<Ljava/lang/Object;>;",
	nullptr,
	_MuxingAttributeSet$MuxingAttributeNameEnumeration_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.MuxingAttributeSet"
};

$Object* allocate$MuxingAttributeSet$MuxingAttributeNameEnumeration($Class* clazz) {
	return $of($alloc(MuxingAttributeSet$MuxingAttributeNameEnumeration));
}

void MuxingAttributeSet$MuxingAttributeNameEnumeration::init$($MuxingAttributeSet* this$0) {
	$set(this, this$0, this$0);
	updateEnum();
}

bool MuxingAttributeSet$MuxingAttributeNameEnumeration::hasMoreElements() {
	if (this->currentEnum == nullptr) {
		return false;
	}
	return $nc(this->currentEnum)->hasMoreElements();
}

$Object* MuxingAttributeSet$MuxingAttributeNameEnumeration::nextElement() {
	if (this->currentEnum == nullptr) {
		$throwNew($NoSuchElementException, "No more names"_s);
	}
	$var($Object, retObject, $nc(this->currentEnum)->nextElement());
	if (!$nc(this->currentEnum)->hasMoreElements()) {
		updateEnum();
	}
	return $of(retObject);
}

void MuxingAttributeSet$MuxingAttributeNameEnumeration::updateEnum() {
	$var($AttributeSetArray, as, this->this$0->getAttributes());
	$set(this, currentEnum, nullptr);
	while (this->currentEnum == nullptr && this->attrIndex < $nc(as)->length) {
		$set(this, currentEnum, $nc(as->get(this->attrIndex++))->getAttributeNames());
		if (!$nc(this->currentEnum)->hasMoreElements()) {
			$set(this, currentEnum, nullptr);
		}
	}
}

MuxingAttributeSet$MuxingAttributeNameEnumeration::MuxingAttributeSet$MuxingAttributeNameEnumeration() {
}

$Class* MuxingAttributeSet$MuxingAttributeNameEnumeration::load$($String* name, bool initialize) {
	$loadClass(MuxingAttributeSet$MuxingAttributeNameEnumeration, name, initialize, &_MuxingAttributeSet$MuxingAttributeNameEnumeration_ClassInfo_, allocate$MuxingAttributeSet$MuxingAttributeNameEnumeration);
	return class$;
}

$Class* MuxingAttributeSet$MuxingAttributeNameEnumeration::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax