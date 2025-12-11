#include <javax/swing/plaf/BorderUIResource$MatteBorderUIResource.h>

#include <java/awt/Color.h>
#include <javax/swing/Icon.h>
#include <javax/swing/border/MatteBorder.h>
#include <javax/swing/plaf/BorderUIResource.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $MatteBorder = ::javax::swing::border::MatteBorder;

namespace javax {
	namespace swing {
		namespace plaf {

$MethodInfo _BorderUIResource$MatteBorderUIResource_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(IIIILjava/awt/Color;)V", nullptr, $PUBLIC, $method(static_cast<void(BorderUIResource$MatteBorderUIResource::*)(int32_t,int32_t,int32_t,int32_t,$Color*)>(&BorderUIResource$MatteBorderUIResource::init$))},
	{"<init>", "(IIIILjavax/swing/Icon;)V", nullptr, $PUBLIC, $method(static_cast<void(BorderUIResource$MatteBorderUIResource::*)(int32_t,int32_t,int32_t,int32_t,$Icon*)>(&BorderUIResource$MatteBorderUIResource::init$))},
	{"<init>", "(Ljavax/swing/Icon;)V", nullptr, $PUBLIC, $method(static_cast<void(BorderUIResource$MatteBorderUIResource::*)($Icon*)>(&BorderUIResource$MatteBorderUIResource::init$))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BorderUIResource$MatteBorderUIResource_InnerClassesInfo_[] = {
	{"javax.swing.plaf.BorderUIResource$MatteBorderUIResource", "javax.swing.plaf.BorderUIResource", "MatteBorderUIResource", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _BorderUIResource$MatteBorderUIResource_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.BorderUIResource$MatteBorderUIResource",
	"javax.swing.border.MatteBorder",
	"javax.swing.plaf.UIResource",
	nullptr,
	_BorderUIResource$MatteBorderUIResource_MethodInfo_,
	nullptr,
	nullptr,
	_BorderUIResource$MatteBorderUIResource_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.BorderUIResource"
};

$Object* allocate$BorderUIResource$MatteBorderUIResource($Class* clazz) {
	return $of($alloc(BorderUIResource$MatteBorderUIResource));
}

int32_t BorderUIResource$MatteBorderUIResource::hashCode() {
	 return this->$MatteBorder::hashCode();
}

bool BorderUIResource$MatteBorderUIResource::equals(Object$* arg0) {
	 return this->$MatteBorder::equals(arg0);
}

$Object* BorderUIResource$MatteBorderUIResource::clone() {
	 return this->$MatteBorder::clone();
}

$String* BorderUIResource$MatteBorderUIResource::toString() {
	 return this->$MatteBorder::toString();
}

void BorderUIResource$MatteBorderUIResource::finalize() {
	this->$MatteBorder::finalize();
}

void BorderUIResource$MatteBorderUIResource::init$(int32_t top, int32_t left, int32_t bottom, int32_t right, $Color* color) {
	$MatteBorder::init$(top, left, bottom, right, color);
}

void BorderUIResource$MatteBorderUIResource::init$(int32_t top, int32_t left, int32_t bottom, int32_t right, $Icon* tileIcon) {
	$MatteBorder::init$(top, left, bottom, right, tileIcon);
}

void BorderUIResource$MatteBorderUIResource::init$($Icon* tileIcon) {
	$MatteBorder::init$(tileIcon);
}

BorderUIResource$MatteBorderUIResource::BorderUIResource$MatteBorderUIResource() {
}

$Class* BorderUIResource$MatteBorderUIResource::load$($String* name, bool initialize) {
	$loadClass(BorderUIResource$MatteBorderUIResource, name, initialize, &_BorderUIResource$MatteBorderUIResource_ClassInfo_, allocate$BorderUIResource$MatteBorderUIResource);
	return class$;
}

$Class* BorderUIResource$MatteBorderUIResource::class$ = nullptr;

		} // plaf
	} // swing
} // javax