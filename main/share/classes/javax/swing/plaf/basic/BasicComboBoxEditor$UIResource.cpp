#include <javax/swing/plaf/basic/BasicComboBoxEditor$UIResource.h>

#include <javax/swing/plaf/basic/BasicComboBoxEditor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicComboBoxEditor = ::javax::swing::plaf::basic::BasicComboBoxEditor;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$MethodInfo _BasicComboBoxEditor$UIResource_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicComboBoxEditor$UIResource::*)()>(&BasicComboBoxEditor$UIResource::init$))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicComboBoxEditor$UIResource_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicComboBoxEditor$UIResource", "javax.swing.plaf.basic.BasicComboBoxEditor", "UIResource", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _BasicComboBoxEditor$UIResource_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicComboBoxEditor$UIResource",
	"javax.swing.plaf.basic.BasicComboBoxEditor",
	"javax.swing.plaf.UIResource",
	nullptr,
	_BasicComboBoxEditor$UIResource_MethodInfo_,
	nullptr,
	nullptr,
	_BasicComboBoxEditor$UIResource_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicComboBoxEditor"
};

$Object* allocate$BasicComboBoxEditor$UIResource($Class* clazz) {
	return $of($alloc(BasicComboBoxEditor$UIResource));
}

int32_t BasicComboBoxEditor$UIResource::hashCode() {
	 return this->$BasicComboBoxEditor::hashCode();
}

bool BasicComboBoxEditor$UIResource::equals(Object$* arg0) {
	 return this->$BasicComboBoxEditor::equals(arg0);
}

$Object* BasicComboBoxEditor$UIResource::clone() {
	 return this->$BasicComboBoxEditor::clone();
}

$String* BasicComboBoxEditor$UIResource::toString() {
	 return this->$BasicComboBoxEditor::toString();
}

void BasicComboBoxEditor$UIResource::finalize() {
	this->$BasicComboBoxEditor::finalize();
}

void BasicComboBoxEditor$UIResource::init$() {
	$BasicComboBoxEditor::init$();
}

BasicComboBoxEditor$UIResource::BasicComboBoxEditor$UIResource() {
}

$Class* BasicComboBoxEditor$UIResource::load$($String* name, bool initialize) {
	$loadClass(BasicComboBoxEditor$UIResource, name, initialize, &_BasicComboBoxEditor$UIResource_ClassInfo_, allocate$BasicComboBoxEditor$UIResource);
	return class$;
}

$Class* BasicComboBoxEditor$UIResource::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax