#include <javax/swing/text/html/AccessibleHTML$TextElementInfo.h>

#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/html/AccessibleHTML$ElementInfo.h>
#include <javax/swing/text/html/AccessibleHTML$HTMLAccessibleContext.h>
#include <javax/swing/text/html/AccessibleHTML$TextElementInfo$TextAccessibleContext.h>
#include <javax/swing/text/html/AccessibleHTML.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $Element = ::javax::swing::text::Element;
using $AccessibleHTML = ::javax::swing::text::html::AccessibleHTML;
using $AccessibleHTML$ElementInfo = ::javax::swing::text::html::AccessibleHTML$ElementInfo;
using $AccessibleHTML$HTMLAccessibleContext = ::javax::swing::text::html::AccessibleHTML$HTMLAccessibleContext;
using $AccessibleHTML$TextElementInfo$TextAccessibleContext = ::javax::swing::text::html::AccessibleHTML$TextElementInfo$TextAccessibleContext;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _AccessibleHTML$TextElementInfo_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/html/AccessibleHTML;", nullptr, $FINAL | $SYNTHETIC, $field(AccessibleHTML$TextElementInfo, this$0)},
	{"accessibleContext", "Ljavax/accessibility/AccessibleContext;", nullptr, $PRIVATE, $field(AccessibleHTML$TextElementInfo, accessibleContext)},
	{}
};

$MethodInfo _AccessibleHTML$TextElementInfo_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/text/html/AccessibleHTML;Ljavax/swing/text/Element;Ljavax/swing/text/html/AccessibleHTML$ElementInfo;)V", nullptr, 0, $method(static_cast<void(AccessibleHTML$TextElementInfo::*)($AccessibleHTML*,$Element*,$AccessibleHTML$ElementInfo*)>(&AccessibleHTML$TextElementInfo::init$))},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AccessibleHTML$TextElementInfo_InnerClassesInfo_[] = {
	{"javax.swing.text.html.AccessibleHTML$TextElementInfo", "javax.swing.text.html.AccessibleHTML", "TextElementInfo", 0},
	{"javax.swing.text.html.AccessibleHTML$ElementInfo", "javax.swing.text.html.AccessibleHTML", "ElementInfo", $PRIVATE},
	{"javax.swing.text.html.AccessibleHTML$TextElementInfo$TextAccessibleContext", "javax.swing.text.html.AccessibleHTML$TextElementInfo", "TextAccessibleContext", $PUBLIC},
	{}
};

$ClassInfo _AccessibleHTML$TextElementInfo_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.AccessibleHTML$TextElementInfo",
	"javax.swing.text.html.AccessibleHTML$ElementInfo",
	"javax.accessibility.Accessible",
	_AccessibleHTML$TextElementInfo_FieldInfo_,
	_AccessibleHTML$TextElementInfo_MethodInfo_,
	nullptr,
	nullptr,
	_AccessibleHTML$TextElementInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.AccessibleHTML"
};

$Object* allocate$AccessibleHTML$TextElementInfo($Class* clazz) {
	return $of($alloc(AccessibleHTML$TextElementInfo));
}

int32_t AccessibleHTML$TextElementInfo::hashCode() {
	 return this->$AccessibleHTML$ElementInfo::hashCode();
}

bool AccessibleHTML$TextElementInfo::equals(Object$* arg0) {
	 return this->$AccessibleHTML$ElementInfo::equals(arg0);
}

$Object* AccessibleHTML$TextElementInfo::clone() {
	 return this->$AccessibleHTML$ElementInfo::clone();
}

$String* AccessibleHTML$TextElementInfo::toString() {
	 return this->$AccessibleHTML$ElementInfo::toString();
}

void AccessibleHTML$TextElementInfo::finalize() {
	this->$AccessibleHTML$ElementInfo::finalize();
}

void AccessibleHTML$TextElementInfo::init$($AccessibleHTML* this$0, $Element* element, $AccessibleHTML$ElementInfo* parent) {
	$set(this, this$0, this$0);
	$AccessibleHTML$ElementInfo::init$(this$0, element, parent);
}

$AccessibleContext* AccessibleHTML$TextElementInfo::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($AccessibleHTML$TextElementInfo$TextAccessibleContext, this, this));
	}
	return this->accessibleContext;
}

AccessibleHTML$TextElementInfo::AccessibleHTML$TextElementInfo() {
}

$Class* AccessibleHTML$TextElementInfo::load$($String* name, bool initialize) {
	$loadClass(AccessibleHTML$TextElementInfo, name, initialize, &_AccessibleHTML$TextElementInfo_ClassInfo_, allocate$AccessibleHTML$TextElementInfo);
	return class$;
}

$Class* AccessibleHTML$TextElementInfo::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax