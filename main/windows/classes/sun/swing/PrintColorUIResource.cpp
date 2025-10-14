#include <sun/swing/PrintColorUIResource.h>

#include <java/awt/Color.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;

namespace sun {
	namespace swing {

$FieldInfo _PrintColorUIResource_FieldInfo_[] = {
	{"printColor", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(PrintColorUIResource, printColor)},
	{}
};

$MethodInfo _PrintColorUIResource_MethodInfo_[] = {
	{"<init>", "(ILjava/awt/Color;)V", nullptr, $PUBLIC, $method(static_cast<void(PrintColorUIResource::*)(int32_t,$Color*)>(&PrintColorUIResource::init$))},
	{"getPrintColor", "()Ljava/awt/Color;", nullptr, $PUBLIC},
	{"writeReplace", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(PrintColorUIResource::*)()>(&PrintColorUIResource::writeReplace))},
	{}
};

$ClassInfo _PrintColorUIResource_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.swing.PrintColorUIResource",
	"javax.swing.plaf.ColorUIResource",
	nullptr,
	_PrintColorUIResource_FieldInfo_,
	_PrintColorUIResource_MethodInfo_
};

$Object* allocate$PrintColorUIResource($Class* clazz) {
	return $of($alloc(PrintColorUIResource));
}

void PrintColorUIResource::init$(int32_t rgb, $Color* printColor) {
	$ColorUIResource::init$(rgb);
	$set(this, printColor, printColor);
}

$Color* PrintColorUIResource::getPrintColor() {
	return ((this->printColor != nullptr) ? this->printColor : static_cast<$Color*>(this));
}

$Object* PrintColorUIResource::writeReplace() {
	return $of($new($ColorUIResource, static_cast<$Color*>(this)));
}

PrintColorUIResource::PrintColorUIResource() {
}

$Class* PrintColorUIResource::load$($String* name, bool initialize) {
	$loadClass(PrintColorUIResource, name, initialize, &_PrintColorUIResource_ClassInfo_, allocate$PrintColorUIResource);
	return class$;
}

$Class* PrintColorUIResource::class$ = nullptr;

	} // swing
} // sun