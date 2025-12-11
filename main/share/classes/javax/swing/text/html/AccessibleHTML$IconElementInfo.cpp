#include <javax/swing/text/html/AccessibleHTML$IconElementInfo.h>

#include <java/awt/Image.h>
#include <java/awt/image/ImageObserver.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/html/AccessibleHTML$ElementInfo.h>
#include <javax/swing/text/html/AccessibleHTML$HTMLAccessibleContext.h>
#include <javax/swing/text/html/AccessibleHTML$IconElementInfo$IconAccessibleContext.h>
#include <javax/swing/text/html/AccessibleHTML.h>
#include <javax/swing/text/html/HTML$Attribute.h>
#include <javax/swing/text/html/ImageView.h>
#include <jcpp.h>

#undef WIDTH

using $Image = ::java::awt::Image;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $Element = ::javax::swing::text::Element;
using $View = ::javax::swing::text::View;
using $AccessibleHTML = ::javax::swing::text::html::AccessibleHTML;
using $AccessibleHTML$ElementInfo = ::javax::swing::text::html::AccessibleHTML$ElementInfo;
using $AccessibleHTML$HTMLAccessibleContext = ::javax::swing::text::html::AccessibleHTML$HTMLAccessibleContext;
using $AccessibleHTML$IconElementInfo$IconAccessibleContext = ::javax::swing::text::html::AccessibleHTML$IconElementInfo$IconAccessibleContext;
using $HTML$Attribute = ::javax::swing::text::html::HTML$Attribute;
using $ImageView = ::javax::swing::text::html::ImageView;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _AccessibleHTML$IconElementInfo_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/html/AccessibleHTML;", nullptr, $FINAL | $SYNTHETIC, $field(AccessibleHTML$IconElementInfo, this$0)},
	{"width", "I", nullptr, $PRIVATE, $field(AccessibleHTML$IconElementInfo, width)},
	{"height", "I", nullptr, $PRIVATE, $field(AccessibleHTML$IconElementInfo, height)},
	{"accessibleContext", "Ljavax/accessibility/AccessibleContext;", nullptr, $PRIVATE, $field(AccessibleHTML$IconElementInfo, accessibleContext)},
	{}
};

$MethodInfo _AccessibleHTML$IconElementInfo_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/text/html/AccessibleHTML;Ljavax/swing/text/Element;Ljavax/swing/text/html/AccessibleHTML$ElementInfo;)V", nullptr, 0, $method(static_cast<void(AccessibleHTML$IconElementInfo::*)($AccessibleHTML*,$Element*,$AccessibleHTML$ElementInfo*)>(&AccessibleHTML$IconElementInfo::init$))},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC},
	{"getImageSize", "(Ljava/lang/Object;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(AccessibleHTML$IconElementInfo::*)(Object$*)>(&AccessibleHTML$IconElementInfo::getImageSize))},
	{"invalidate", "(Z)V", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AccessibleHTML$IconElementInfo_InnerClassesInfo_[] = {
	{"javax.swing.text.html.AccessibleHTML$IconElementInfo", "javax.swing.text.html.AccessibleHTML", "IconElementInfo", $PRIVATE},
	{"javax.swing.text.html.AccessibleHTML$ElementInfo", "javax.swing.text.html.AccessibleHTML", "ElementInfo", $PRIVATE},
	{"javax.swing.text.html.AccessibleHTML$IconElementInfo$IconAccessibleContext", "javax.swing.text.html.AccessibleHTML$IconElementInfo", "IconAccessibleContext", $PROTECTED},
	{}
};

$ClassInfo _AccessibleHTML$IconElementInfo_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.AccessibleHTML$IconElementInfo",
	"javax.swing.text.html.AccessibleHTML$ElementInfo",
	"javax.accessibility.Accessible",
	_AccessibleHTML$IconElementInfo_FieldInfo_,
	_AccessibleHTML$IconElementInfo_MethodInfo_,
	nullptr,
	nullptr,
	_AccessibleHTML$IconElementInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.AccessibleHTML"
};

$Object* allocate$AccessibleHTML$IconElementInfo($Class* clazz) {
	return $of($alloc(AccessibleHTML$IconElementInfo));
}

int32_t AccessibleHTML$IconElementInfo::hashCode() {
	 return this->$AccessibleHTML$ElementInfo::hashCode();
}

bool AccessibleHTML$IconElementInfo::equals(Object$* arg0) {
	 return this->$AccessibleHTML$ElementInfo::equals(arg0);
}

$Object* AccessibleHTML$IconElementInfo::clone() {
	 return this->$AccessibleHTML$ElementInfo::clone();
}

$String* AccessibleHTML$IconElementInfo::toString() {
	 return this->$AccessibleHTML$ElementInfo::toString();
}

void AccessibleHTML$IconElementInfo::finalize() {
	this->$AccessibleHTML$ElementInfo::finalize();
}

void AccessibleHTML$IconElementInfo::init$($AccessibleHTML* this$0, $Element* element, $AccessibleHTML$ElementInfo* parent) {
	$set(this, this$0, this$0);
	$AccessibleHTML$ElementInfo::init$(this$0, element, parent);
	this->width = -1;
	this->height = -1;
}

void AccessibleHTML$IconElementInfo::invalidate(bool first) {
	$AccessibleHTML$ElementInfo::invalidate(first);
	this->width = (this->height = -1);
}

int32_t AccessibleHTML$IconElementInfo::getImageSize(Object$* key) {
	$useLocalCurrentObjectStackCache();
	if (validateIfNecessary()) {
		int32_t size = getIntAttr($(getAttributes()), key, -1);
		if (size == -1) {
			$var($View, v, getView());
			size = 0;
			if ($instanceOf($ImageView, v)) {
				$var($Image, img, $nc(($cast($ImageView, v)))->getImage());
				if (img != nullptr) {
					$init($HTML$Attribute);
					if ($equals(key, $HTML$Attribute::WIDTH)) {
						size = img->getWidth(nullptr);
					} else {
						size = img->getHeight(nullptr);
					}
				}
			}
		}
		return size;
	}
	return 0;
}

$AccessibleContext* AccessibleHTML$IconElementInfo::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($AccessibleHTML$IconElementInfo$IconAccessibleContext, this, this));
	}
	return this->accessibleContext;
}

AccessibleHTML$IconElementInfo::AccessibleHTML$IconElementInfo() {
}

$Class* AccessibleHTML$IconElementInfo::load$($String* name, bool initialize) {
	$loadClass(AccessibleHTML$IconElementInfo, name, initialize, &_AccessibleHTML$IconElementInfo_ClassInfo_, allocate$AccessibleHTML$IconElementInfo);
	return class$;
}

$Class* AccessibleHTML$IconElementInfo::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax