#include <javax/swing/text/html/AccessibleHTML$IconElementInfo$IconAccessibleContext.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/accessibility/AccessibleIcon.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/html/AccessibleHTML$ElementInfo.h>
#include <javax/swing/text/html/AccessibleHTML$HTMLAccessibleContext.h>
#include <javax/swing/text/html/AccessibleHTML$IconElementInfo.h>
#include <javax/swing/text/html/AccessibleHTML.h>
#include <javax/swing/text/html/HTML$Attribute.h>
#include <javax/swing/text/html/ImageView.h>
#include <jcpp.h>

#undef HEIGHT
#undef ICON
#undef WIDTH

using $AccessibleIconArray = $Array<::javax::accessibility::AccessibleIcon>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleIcon = ::javax::accessibility::AccessibleIcon;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $JEditorPane = ::javax::swing::JEditorPane;
using $View = ::javax::swing::text::View;
using $AccessibleHTML = ::javax::swing::text::html::AccessibleHTML;
using $AccessibleHTML$ElementInfo = ::javax::swing::text::html::AccessibleHTML$ElementInfo;
using $AccessibleHTML$HTMLAccessibleContext = ::javax::swing::text::html::AccessibleHTML$HTMLAccessibleContext;
using $AccessibleHTML$IconElementInfo = ::javax::swing::text::html::AccessibleHTML$IconElementInfo;
using $HTML$Attribute = ::javax::swing::text::html::HTML$Attribute;
using $ImageView = ::javax::swing::text::html::ImageView;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _AccessibleHTML$IconElementInfo$IconAccessibleContext_FieldInfo_[] = {
	{"this$1", "Ljavax/swing/text/html/AccessibleHTML$IconElementInfo;", nullptr, $FINAL | $SYNTHETIC, $field(AccessibleHTML$IconElementInfo$IconAccessibleContext, this$1)},
	{}
};

$MethodInfo _AccessibleHTML$IconElementInfo$IconAccessibleContext_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/text/html/AccessibleHTML$IconElementInfo;Ljavax/swing/text/html/AccessibleHTML$ElementInfo;)V", nullptr, $PUBLIC, $method(static_cast<void(AccessibleHTML$IconElementInfo$IconAccessibleContext::*)($AccessibleHTML$IconElementInfo*,$AccessibleHTML$ElementInfo*)>(&AccessibleHTML$IconElementInfo$IconAccessibleContext::init$))},
	{"getAccessibleDescription", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAccessibleIcon", "()[Ljavax/accessibility/AccessibleIcon;", nullptr, $PUBLIC},
	{"getAccessibleIconDescription", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAccessibleIconHeight", "()I", nullptr, $PUBLIC},
	{"getAccessibleIconWidth", "()I", nullptr, $PUBLIC},
	{"getAccessibleName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{"setAccessibleIconDescription", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AccessibleHTML$IconElementInfo$IconAccessibleContext_InnerClassesInfo_[] = {
	{"javax.swing.text.html.AccessibleHTML$IconElementInfo", "javax.swing.text.html.AccessibleHTML", "IconElementInfo", $PRIVATE},
	{"javax.swing.text.html.AccessibleHTML$IconElementInfo$IconAccessibleContext", "javax.swing.text.html.AccessibleHTML$IconElementInfo", "IconAccessibleContext", $PROTECTED},
	{"javax.swing.text.html.AccessibleHTML$HTMLAccessibleContext", "javax.swing.text.html.AccessibleHTML", "HTMLAccessibleContext", $PROTECTED | $ABSTRACT},
	{}
};

$ClassInfo _AccessibleHTML$IconElementInfo$IconAccessibleContext_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.html.AccessibleHTML$IconElementInfo$IconAccessibleContext",
	"javax.swing.text.html.AccessibleHTML$HTMLAccessibleContext",
	"javax.accessibility.AccessibleIcon",
	_AccessibleHTML$IconElementInfo$IconAccessibleContext_FieldInfo_,
	_AccessibleHTML$IconElementInfo$IconAccessibleContext_MethodInfo_,
	nullptr,
	nullptr,
	_AccessibleHTML$IconElementInfo$IconAccessibleContext_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.AccessibleHTML"
};

$Object* allocate$AccessibleHTML$IconElementInfo$IconAccessibleContext($Class* clazz) {
	return $of($alloc(AccessibleHTML$IconElementInfo$IconAccessibleContext));
}

int32_t AccessibleHTML$IconElementInfo$IconAccessibleContext::hashCode() {
	 return this->$AccessibleHTML$HTMLAccessibleContext::hashCode();
}

bool AccessibleHTML$IconElementInfo$IconAccessibleContext::equals(Object$* arg0) {
	 return this->$AccessibleHTML$HTMLAccessibleContext::equals(arg0);
}

$Object* AccessibleHTML$IconElementInfo$IconAccessibleContext::clone() {
	 return this->$AccessibleHTML$HTMLAccessibleContext::clone();
}

$String* AccessibleHTML$IconElementInfo$IconAccessibleContext::toString() {
	 return this->$AccessibleHTML$HTMLAccessibleContext::toString();
}

void AccessibleHTML$IconElementInfo$IconAccessibleContext::finalize() {
	this->$AccessibleHTML$HTMLAccessibleContext::finalize();
}

void AccessibleHTML$IconElementInfo$IconAccessibleContext::init$($AccessibleHTML$IconElementInfo* this$1, $AccessibleHTML$ElementInfo* elementInfo) {
	$set(this, this$1, this$1);
	$AccessibleHTML$HTMLAccessibleContext::init$(this$1->this$0, elementInfo);
}

$String* AccessibleHTML$IconElementInfo$IconAccessibleContext::getAccessibleName() {
	return getAccessibleIconDescription();
}

$String* AccessibleHTML$IconElementInfo$IconAccessibleContext::getAccessibleDescription() {
	return $nc($nc(this->this$1->this$0)->editor)->getContentType();
}

$AccessibleRole* AccessibleHTML$IconElementInfo$IconAccessibleContext::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::ICON;
}

$AccessibleIconArray* AccessibleHTML$IconElementInfo$IconAccessibleContext::getAccessibleIcon() {
	$var($AccessibleIconArray, icons, $new($AccessibleIconArray, 1));
	icons->set(0, this);
	return icons;
}

$String* AccessibleHTML$IconElementInfo$IconAccessibleContext::getAccessibleIconDescription() {
	return $nc(($cast($ImageView, $(this->this$1->getView()))))->getAltText();
}

void AccessibleHTML$IconElementInfo$IconAccessibleContext::setAccessibleIconDescription($String* description) {
}

int32_t AccessibleHTML$IconElementInfo$IconAccessibleContext::getAccessibleIconWidth() {
	if (this->this$1->width == -1) {
		$init($HTML$Attribute);
		this->this$1->width = this->this$1->getImageSize($HTML$Attribute::WIDTH);
	}
	return this->this$1->width;
}

int32_t AccessibleHTML$IconElementInfo$IconAccessibleContext::getAccessibleIconHeight() {
	if (this->this$1->height == -1) {
		$init($HTML$Attribute);
		this->this$1->height = this->this$1->getImageSize($HTML$Attribute::HEIGHT);
	}
	return this->this$1->height;
}

AccessibleHTML$IconElementInfo$IconAccessibleContext::AccessibleHTML$IconElementInfo$IconAccessibleContext() {
}

$Class* AccessibleHTML$IconElementInfo$IconAccessibleContext::load$($String* name, bool initialize) {
	$loadClass(AccessibleHTML$IconElementInfo$IconAccessibleContext, name, initialize, &_AccessibleHTML$IconElementInfo$IconAccessibleContext_ClassInfo_, allocate$AccessibleHTML$IconElementInfo$IconAccessibleContext);
	return class$;
}

$Class* AccessibleHTML$IconElementInfo$IconAccessibleContext::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax