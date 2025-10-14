#include <javax/swing/ImageIcon$AccessibleImageIcon.h>

#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Locale.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/accessibility/AccessibleStateSet.h>
#include <javax/swing/ImageIcon.h>
#include <jcpp.h>

#undef ICON

using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleIcon = ::javax::accessibility::AccessibleIcon;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $AccessibleStateSet = ::javax::accessibility::AccessibleStateSet;
using $ImageIcon = ::javax::swing::ImageIcon;

namespace javax {
	namespace swing {

$FieldInfo _ImageIcon$AccessibleImageIcon_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/ImageIcon;", nullptr, $FINAL | $SYNTHETIC, $field(ImageIcon$AccessibleImageIcon, this$0)},
	{}
};

$MethodInfo _ImageIcon$AccessibleImageIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/ImageIcon;)V", nullptr, $PROTECTED, $method(static_cast<void(ImageIcon$AccessibleImageIcon::*)($ImageIcon*)>(&ImageIcon$AccessibleImageIcon::init$))},
	{"getAccessibleChild", "(I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessibleChildrenCount", "()I", nullptr, $PUBLIC},
	{"getAccessibleIconDescription", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAccessibleIconHeight", "()I", nullptr, $PUBLIC},
	{"getAccessibleIconWidth", "()I", nullptr, $PUBLIC},
	{"getAccessibleIndexInParent", "()I", nullptr, $PUBLIC},
	{"getAccessibleParent", "()Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{"getAccessibleStateSet", "()Ljavax/accessibility/AccessibleStateSet;", nullptr, $PUBLIC},
	{"getLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC, nullptr, "java.awt.IllegalComponentStateException"},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(ImageIcon$AccessibleImageIcon::*)($ObjectInputStream*)>(&ImageIcon$AccessibleImageIcon::readObject)), "java.lang.ClassNotFoundException,java.io.IOException"},
	{"setAccessibleIconDescription", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(ImageIcon$AccessibleImageIcon::*)($ObjectOutputStream*)>(&ImageIcon$AccessibleImageIcon::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _ImageIcon$AccessibleImageIcon_InnerClassesInfo_[] = {
	{"javax.swing.ImageIcon$AccessibleImageIcon", "javax.swing.ImageIcon", "AccessibleImageIcon", $PROTECTED},
	{}
};

$ClassInfo _ImageIcon$AccessibleImageIcon_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.ImageIcon$AccessibleImageIcon",
	"javax.accessibility.AccessibleContext",
	"javax.accessibility.AccessibleIcon,java.io.Serializable",
	_ImageIcon$AccessibleImageIcon_FieldInfo_,
	_ImageIcon$AccessibleImageIcon_MethodInfo_,
	nullptr,
	nullptr,
	_ImageIcon$AccessibleImageIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.ImageIcon"
};

$Object* allocate$ImageIcon$AccessibleImageIcon($Class* clazz) {
	return $of($alloc(ImageIcon$AccessibleImageIcon));
}

int32_t ImageIcon$AccessibleImageIcon::hashCode() {
	 return this->$AccessibleContext::hashCode();
}

bool ImageIcon$AccessibleImageIcon::equals(Object$* arg0) {
	 return this->$AccessibleContext::equals(arg0);
}

$Object* ImageIcon$AccessibleImageIcon::clone() {
	 return this->$AccessibleContext::clone();
}

$String* ImageIcon$AccessibleImageIcon::toString() {
	 return this->$AccessibleContext::toString();
}

void ImageIcon$AccessibleImageIcon::finalize() {
	this->$AccessibleContext::finalize();
}

void ImageIcon$AccessibleImageIcon::init$($ImageIcon* this$0) {
	$set(this, this$0, this$0);
	$AccessibleContext::init$();
}

$AccessibleRole* ImageIcon$AccessibleImageIcon::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::ICON;
}

$AccessibleStateSet* ImageIcon$AccessibleImageIcon::getAccessibleStateSet() {
	return nullptr;
}

$Accessible* ImageIcon$AccessibleImageIcon::getAccessibleParent() {
	return nullptr;
}

int32_t ImageIcon$AccessibleImageIcon::getAccessibleIndexInParent() {
	return -1;
}

int32_t ImageIcon$AccessibleImageIcon::getAccessibleChildrenCount() {
	return 0;
}

$Accessible* ImageIcon$AccessibleImageIcon::getAccessibleChild(int32_t i) {
	return nullptr;
}

$Locale* ImageIcon$AccessibleImageIcon::getLocale() {
	return nullptr;
}

$String* ImageIcon$AccessibleImageIcon::getAccessibleIconDescription() {
	return this->this$0->getDescription();
}

void ImageIcon$AccessibleImageIcon::setAccessibleIconDescription($String* description) {
	this->this$0->setDescription(description);
}

int32_t ImageIcon$AccessibleImageIcon::getAccessibleIconHeight() {
	return this->this$0->height;
}

int32_t ImageIcon$AccessibleImageIcon::getAccessibleIconWidth() {
	return this->this$0->width;
}

void ImageIcon$AccessibleImageIcon::readObject($ObjectInputStream* s) {
	$nc(s)->defaultReadObject();
}

void ImageIcon$AccessibleImageIcon::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
}

ImageIcon$AccessibleImageIcon::ImageIcon$AccessibleImageIcon() {
}

$Class* ImageIcon$AccessibleImageIcon::load$($String* name, bool initialize) {
	$loadClass(ImageIcon$AccessibleImageIcon, name, initialize, &_ImageIcon$AccessibleImageIcon_ClassInfo_, allocate$ImageIcon$AccessibleImageIcon);
	return class$;
}

$Class* ImageIcon$AccessibleImageIcon::class$ = nullptr;

	} // swing
} // javax