#include <javax/swing/plaf/metal/MetalFileChooserUI$FileRenderer.h>

#include <javax/swing/DefaultListCellRenderer.h>
#include <javax/swing/plaf/metal/MetalFileChooserUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $DefaultListCellRenderer = ::javax::swing::DefaultListCellRenderer;
using $MetalFileChooserUI = ::javax::swing::plaf::metal::MetalFileChooserUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$NamedAttribute MetalFileChooserUI$FileRenderer_Attribute_var$0[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _MetalFileChooserUI$FileRenderer_Annotations_[] = {
	{"Ljava/lang/Deprecated;", MetalFileChooserUI$FileRenderer_Attribute_var$0},
	{}
};

$FieldInfo _MetalFileChooserUI$FileRenderer_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/metal/MetalFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(MetalFileChooserUI$FileRenderer, this$0)},
	{}
};

$MethodInfo _MetalFileChooserUI$FileRenderer_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/metal/MetalFileChooserUI;)V", nullptr, $PROTECTED, $method(static_cast<void(MetalFileChooserUI$FileRenderer::*)($MetalFileChooserUI*)>(&MetalFileChooserUI$FileRenderer::init$))},
	{}
};

$InnerClassInfo _MetalFileChooserUI$FileRenderer_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalFileChooserUI$FileRenderer", "javax.swing.plaf.metal.MetalFileChooserUI", "FileRenderer", $PROTECTED},
	{}
};

$ClassInfo _MetalFileChooserUI$FileRenderer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalFileChooserUI$FileRenderer",
	"javax.swing.DefaultListCellRenderer",
	nullptr,
	_MetalFileChooserUI$FileRenderer_FieldInfo_,
	_MetalFileChooserUI$FileRenderer_MethodInfo_,
	nullptr,
	nullptr,
	_MetalFileChooserUI$FileRenderer_InnerClassesInfo_,
	_MetalFileChooserUI$FileRenderer_Annotations_,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalFileChooserUI"
};

$Object* allocate$MetalFileChooserUI$FileRenderer($Class* clazz) {
	return $of($alloc(MetalFileChooserUI$FileRenderer));
}

void MetalFileChooserUI$FileRenderer::init$($MetalFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$DefaultListCellRenderer::init$();
}

MetalFileChooserUI$FileRenderer::MetalFileChooserUI$FileRenderer() {
}

$Class* MetalFileChooserUI$FileRenderer::load$($String* name, bool initialize) {
	$loadClass(MetalFileChooserUI$FileRenderer, name, initialize, &_MetalFileChooserUI$FileRenderer_ClassInfo_, allocate$MetalFileChooserUI$FileRenderer);
	return class$;
}

$Class* MetalFileChooserUI$FileRenderer::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax