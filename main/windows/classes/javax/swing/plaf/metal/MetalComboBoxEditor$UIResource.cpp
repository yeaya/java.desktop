#include <javax/swing/plaf/metal/MetalComboBoxEditor$UIResource.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/metal/MetalComboBoxEditor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIResource = ::javax::swing::plaf::UIResource;
using $MetalComboBoxEditor = ::javax::swing::plaf::metal::MetalComboBoxEditor;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$MethodInfo _MetalComboBoxEditor$UIResource_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalComboBoxEditor$UIResource::*)()>(&MetalComboBoxEditor$UIResource::init$))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalComboBoxEditor$UIResource_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalComboBoxEditor$UIResource", "javax.swing.plaf.metal.MetalComboBoxEditor", "UIResource", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MetalComboBoxEditor$UIResource_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalComboBoxEditor$UIResource",
	"javax.swing.plaf.metal.MetalComboBoxEditor",
	"javax.swing.plaf.UIResource",
	nullptr,
	_MetalComboBoxEditor$UIResource_MethodInfo_,
	nullptr,
	nullptr,
	_MetalComboBoxEditor$UIResource_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalComboBoxEditor"
};

$Object* allocate$MetalComboBoxEditor$UIResource($Class* clazz) {
	return $of($alloc(MetalComboBoxEditor$UIResource));
}

int32_t MetalComboBoxEditor$UIResource::hashCode() {
	 return this->$MetalComboBoxEditor::hashCode();
}

bool MetalComboBoxEditor$UIResource::equals(Object$* arg0) {
	 return this->$MetalComboBoxEditor::equals(arg0);
}

$Object* MetalComboBoxEditor$UIResource::clone() {
	 return this->$MetalComboBoxEditor::clone();
}

$String* MetalComboBoxEditor$UIResource::toString() {
	 return this->$MetalComboBoxEditor::toString();
}

void MetalComboBoxEditor$UIResource::finalize() {
	this->$MetalComboBoxEditor::finalize();
}

void MetalComboBoxEditor$UIResource::init$() {
	$MetalComboBoxEditor::init$();
}

MetalComboBoxEditor$UIResource::MetalComboBoxEditor$UIResource() {
}

$Class* MetalComboBoxEditor$UIResource::load$($String* name, bool initialize) {
	$loadClass(MetalComboBoxEditor$UIResource, name, initialize, &_MetalComboBoxEditor$UIResource_ClassInfo_, allocate$MetalComboBoxEditor$UIResource);
	return class$;
}

$Class* MetalComboBoxEditor$UIResource::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax