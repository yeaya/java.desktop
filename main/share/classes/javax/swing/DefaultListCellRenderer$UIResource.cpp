#include <javax/swing/DefaultListCellRenderer$UIResource.h>

#include <javax/swing/DefaultListCellRenderer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultListCellRenderer = ::javax::swing::DefaultListCellRenderer;
using $UIResource = ::javax::swing::plaf::UIResource;

namespace javax {
	namespace swing {

$MethodInfo _DefaultListCellRenderer$UIResource_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultListCellRenderer$UIResource::*)()>(&DefaultListCellRenderer$UIResource::init$))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultListCellRenderer$UIResource_InnerClassesInfo_[] = {
	{"javax.swing.DefaultListCellRenderer$UIResource", "javax.swing.DefaultListCellRenderer", "UIResource", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _DefaultListCellRenderer$UIResource_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.DefaultListCellRenderer$UIResource",
	"javax.swing.DefaultListCellRenderer",
	"javax.swing.plaf.UIResource",
	nullptr,
	_DefaultListCellRenderer$UIResource_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultListCellRenderer$UIResource_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.DefaultListCellRenderer"
};

$Object* allocate$DefaultListCellRenderer$UIResource($Class* clazz) {
	return $of($alloc(DefaultListCellRenderer$UIResource));
}

$String* DefaultListCellRenderer$UIResource::toString() {
	 return this->$DefaultListCellRenderer::toString();
}

int32_t DefaultListCellRenderer$UIResource::hashCode() {
	 return this->$DefaultListCellRenderer::hashCode();
}

bool DefaultListCellRenderer$UIResource::equals(Object$* arg0) {
	 return this->$DefaultListCellRenderer::equals(arg0);
}

$Object* DefaultListCellRenderer$UIResource::clone() {
	 return this->$DefaultListCellRenderer::clone();
}

void DefaultListCellRenderer$UIResource::finalize() {
	this->$DefaultListCellRenderer::finalize();
}

void DefaultListCellRenderer$UIResource::init$() {
	$DefaultListCellRenderer::init$();
}

DefaultListCellRenderer$UIResource::DefaultListCellRenderer$UIResource() {
}

$Class* DefaultListCellRenderer$UIResource::load$($String* name, bool initialize) {
	$loadClass(DefaultListCellRenderer$UIResource, name, initialize, &_DefaultListCellRenderer$UIResource_ClassInfo_, allocate$DefaultListCellRenderer$UIResource);
	return class$;
}

$Class* DefaultListCellRenderer$UIResource::class$ = nullptr;

	} // swing
} // javax