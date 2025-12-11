#include <javax/swing/plaf/basic/BasicComboBoxRenderer$UIResource.h>

#include <javax/swing/plaf/basic/BasicComboBoxRenderer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicComboBoxRenderer = ::javax::swing::plaf::basic::BasicComboBoxRenderer;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$MethodInfo _BasicComboBoxRenderer$UIResource_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicComboBoxRenderer$UIResource::*)()>(&BasicComboBoxRenderer$UIResource::init$))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicComboBoxRenderer$UIResource_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicComboBoxRenderer$UIResource", "javax.swing.plaf.basic.BasicComboBoxRenderer", "UIResource", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _BasicComboBoxRenderer$UIResource_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicComboBoxRenderer$UIResource",
	"javax.swing.plaf.basic.BasicComboBoxRenderer",
	"javax.swing.plaf.UIResource",
	nullptr,
	_BasicComboBoxRenderer$UIResource_MethodInfo_,
	nullptr,
	nullptr,
	_BasicComboBoxRenderer$UIResource_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicComboBoxRenderer"
};

$Object* allocate$BasicComboBoxRenderer$UIResource($Class* clazz) {
	return $of($alloc(BasicComboBoxRenderer$UIResource));
}

$String* BasicComboBoxRenderer$UIResource::toString() {
	 return this->$BasicComboBoxRenderer::toString();
}

int32_t BasicComboBoxRenderer$UIResource::hashCode() {
	 return this->$BasicComboBoxRenderer::hashCode();
}

bool BasicComboBoxRenderer$UIResource::equals(Object$* arg0) {
	 return this->$BasicComboBoxRenderer::equals(arg0);
}

$Object* BasicComboBoxRenderer$UIResource::clone() {
	 return this->$BasicComboBoxRenderer::clone();
}

void BasicComboBoxRenderer$UIResource::finalize() {
	this->$BasicComboBoxRenderer::finalize();
}

void BasicComboBoxRenderer$UIResource::init$() {
	$BasicComboBoxRenderer::init$();
}

BasicComboBoxRenderer$UIResource::BasicComboBoxRenderer$UIResource() {
}

$Class* BasicComboBoxRenderer$UIResource::load$($String* name, bool initialize) {
	$loadClass(BasicComboBoxRenderer$UIResource, name, initialize, &_BasicComboBoxRenderer$UIResource_ClassInfo_, allocate$BasicComboBoxRenderer$UIResource);
	return class$;
}

$Class* BasicComboBoxRenderer$UIResource::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax