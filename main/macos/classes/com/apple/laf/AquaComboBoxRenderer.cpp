#include <com/apple/laf/AquaComboBoxRenderer.h>

#include <com/apple/laf/AquaComboBoxRendererInternal.h>
#include <javax/swing/JComboBox.h>
#include <jcpp.h>

using $AquaComboBoxRendererInternal = ::com::apple::laf::AquaComboBoxRendererInternal;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComboBox = ::javax::swing::JComboBox;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaComboBoxRenderer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JComboBox;)V", "(Ljavax/swing/JComboBox<*>;)V", $PUBLIC, $method(static_cast<void(AquaComboBoxRenderer::*)($JComboBox*)>(&AquaComboBoxRenderer::init$))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AquaComboBoxRenderer_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaComboBoxRenderer",
	"com.apple.laf.AquaComboBoxRendererInternal",
	"javax.swing.plaf.UIResource",
	nullptr,
	_AquaComboBoxRenderer_MethodInfo_,
	"Lcom/apple/laf/AquaComboBoxRendererInternal<Ljava/lang/Object;>;Ljavax/swing/plaf/UIResource;"
};

$Object* allocate$AquaComboBoxRenderer($Class* clazz) {
	return $of($alloc(AquaComboBoxRenderer));
}

$String* AquaComboBoxRenderer::toString() {
	 return this->$AquaComboBoxRendererInternal::toString();
}

int32_t AquaComboBoxRenderer::hashCode() {
	 return this->$AquaComboBoxRendererInternal::hashCode();
}

bool AquaComboBoxRenderer::equals(Object$* arg0) {
	 return this->$AquaComboBoxRendererInternal::equals(arg0);
}

$Object* AquaComboBoxRenderer::clone() {
	 return this->$AquaComboBoxRendererInternal::clone();
}

void AquaComboBoxRenderer::finalize() {
	this->$AquaComboBoxRendererInternal::finalize();
}

void AquaComboBoxRenderer::init$($JComboBox* comboBox) {
	$AquaComboBoxRendererInternal::init$(comboBox);
}

AquaComboBoxRenderer::AquaComboBoxRenderer() {
}

$Class* AquaComboBoxRenderer::load$($String* name, bool initialize) {
	$loadClass(AquaComboBoxRenderer, name, initialize, &_AquaComboBoxRenderer_ClassInfo_, allocate$AquaComboBoxRenderer);
	return class$;
}

$Class* AquaComboBoxRenderer::class$ = nullptr;

		} // laf
	} // apple
} // com