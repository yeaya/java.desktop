#include <javax/print/attribute/standard/DialogOwner.h>

#include <java/awt/Window.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/print/attribute/standard/DialogOwner$Accessor.h>
#include <sun/print/DialogOwnerAccessor.h>
#include <jcpp.h>

using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrintRequestAttribute = ::javax::print::attribute::PrintRequestAttribute;
using $DialogOwner$Accessor = ::javax::print::attribute::standard::DialogOwner$Accessor;
using $DialogOwnerAccessor = ::sun::print::DialogOwnerAccessor;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$FieldInfo _DialogOwner_FieldInfo_[] = {
	{"accessor", "Ljavax/print/attribute/standard/DialogOwner$Accessor;", nullptr, $PRIVATE | $STATIC, $staticField(DialogOwner, accessor)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DialogOwner, serialVersionUID)},
	{"owner", "Ljava/awt/Window;", nullptr, $PRIVATE, $field(DialogOwner, owner)},
	{"id", "J", nullptr, $PRIVATE | $TRANSIENT, $field(DialogOwner, id)},
	{}
};

$MethodInfo _DialogOwner_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DialogOwner::*)()>(&DialogOwner::init$))},
	{"<init>", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $method(static_cast<void(DialogOwner::*)($Window*)>(&DialogOwner::init$))},
	{"<init>", "(J)V", nullptr, 0, $method(static_cast<void(DialogOwner::*)(int64_t)>(&DialogOwner::init$))},
	{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL},
	{"getID", "()J", nullptr, 0, $method(static_cast<int64_t(DialogOwner::*)()>(&DialogOwner::getID))},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"getOwner", "()Ljava/awt/Window;", nullptr, $PUBLIC, $method(static_cast<$Window*(DialogOwner::*)()>(&DialogOwner::getOwner))},
	{}
};

$InnerClassInfo _DialogOwner_InnerClassesInfo_[] = {
	{"javax.print.attribute.standard.DialogOwner$Accessor", "javax.print.attribute.standard.DialogOwner", "Accessor", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DialogOwner_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.print.attribute.standard.DialogOwner",
	"java.lang.Object",
	"javax.print.attribute.PrintRequestAttribute",
	_DialogOwner_FieldInfo_,
	_DialogOwner_MethodInfo_,
	nullptr,
	nullptr,
	_DialogOwner_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.print.attribute.standard.DialogOwner$Accessor"
};

$Object* allocate$DialogOwner($Class* clazz) {
	return $of($alloc(DialogOwner));
}

$DialogOwner$Accessor* DialogOwner::accessor = nullptr;

void DialogOwner::init$() {
}

void DialogOwner::init$($Window* owner) {
	$set(this, owner, owner);
}

void DialogOwner::init$(int64_t id) {
	this->id = id;
}

int64_t DialogOwner::getID() {
	return this->id;
}

$Window* DialogOwner::getOwner() {
	return this->owner;
}

$Class* DialogOwner::getCategory() {
	return DialogOwner::class$;
}

$String* DialogOwner::getName() {
	return "dialog-owner"_s;
}

void clinit$DialogOwner($Class* class$) {
	$assignStatic(DialogOwner::accessor, $new($DialogOwner$Accessor));
	{
		$DialogOwnerAccessor::setAccessor(DialogOwner::accessor);
	}
}

DialogOwner::DialogOwner() {
}

$Class* DialogOwner::load$($String* name, bool initialize) {
	$loadClass(DialogOwner, name, initialize, &_DialogOwner_ClassInfo_, clinit$DialogOwner, allocate$DialogOwner);
	return class$;
}

$Class* DialogOwner::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax