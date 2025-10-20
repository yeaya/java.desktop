#include <sun/swing/plaf/synth/SynthFileChooserUIImpl$FilterComboBoxRenderer.h>

#include <java/awt/Component.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JList.h>
#include <javax/swing/ListCellRenderer.h>
#include <javax/swing/filechooser/FileFilter.h>
#include <sun/swing/plaf/synth/SynthFileChooserUIImpl.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JLabel = ::javax::swing::JLabel;
using $JList = ::javax::swing::JList;
using $ListCellRenderer = ::javax::swing::ListCellRenderer;
using $FileFilter = ::javax::swing::filechooser::FileFilter;
using $SynthFileChooserUIImpl = ::sun::swing::plaf::synth::SynthFileChooserUIImpl;

namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthFileChooserUIImpl$FilterComboBoxRenderer_FieldInfo_[] = {
	{"this$0", "Lsun/swing/plaf/synth/SynthFileChooserUIImpl;", nullptr, $FINAL | $SYNTHETIC, $field(SynthFileChooserUIImpl$FilterComboBoxRenderer, this$0)},
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SynthFileChooserUIImpl$FilterComboBoxRenderer, $assertionsDisabled)},
	{"delegate", "Ljavax/swing/ListCellRenderer;", "Ljavax/swing/ListCellRenderer<-Ljavax/swing/filechooser/FileFilter;>;", $PRIVATE, $field(SynthFileChooserUIImpl$FilterComboBoxRenderer, delegate)},
	{}
};

$MethodInfo _SynthFileChooserUIImpl$FilterComboBoxRenderer_MethodInfo_[] = {
	{"<init>", "(Lsun/swing/plaf/synth/SynthFileChooserUIImpl;Ljavax/swing/ListCellRenderer;)V", "(Ljavax/swing/ListCellRenderer<-Ljavax/swing/filechooser/FileFilter;>;)V", $PRIVATE, $method(static_cast<void(SynthFileChooserUIImpl$FilterComboBoxRenderer::*)($SynthFileChooserUIImpl*,$ListCellRenderer*)>(&SynthFileChooserUIImpl$FilterComboBoxRenderer::init$))},
	{"getListCellRendererComponent", "(Ljavax/swing/JList;Ljavax/swing/filechooser/FileFilter;IZZ)Ljava/awt/Component;", "(Ljavax/swing/JList<+Ljavax/swing/filechooser/FileFilter;>;Ljavax/swing/filechooser/FileFilter;IZZ)Ljava/awt/Component;", $PUBLIC},
	{"getListCellRendererComponent", "(Ljavax/swing/JList;Ljava/lang/Object;IZZ)Ljava/awt/Component;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _SynthFileChooserUIImpl$FilterComboBoxRenderer_InnerClassesInfo_[] = {
	{"sun.swing.plaf.synth.SynthFileChooserUIImpl$FilterComboBoxRenderer", "sun.swing.plaf.synth.SynthFileChooserUIImpl", "FilterComboBoxRenderer", $PUBLIC},
	{}
};

$ClassInfo _SynthFileChooserUIImpl$FilterComboBoxRenderer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.swing.plaf.synth.SynthFileChooserUIImpl$FilterComboBoxRenderer",
	"java.lang.Object",
	"javax.swing.ListCellRenderer",
	_SynthFileChooserUIImpl$FilterComboBoxRenderer_FieldInfo_,
	_SynthFileChooserUIImpl$FilterComboBoxRenderer_MethodInfo_,
	"Ljava/lang/Object;Ljavax/swing/ListCellRenderer<Ljavax/swing/filechooser/FileFilter;>;",
	nullptr,
	_SynthFileChooserUIImpl$FilterComboBoxRenderer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.plaf.synth.SynthFileChooserUIImpl"
};

$Object* allocate$SynthFileChooserUIImpl$FilterComboBoxRenderer($Class* clazz) {
	return $of($alloc(SynthFileChooserUIImpl$FilterComboBoxRenderer));
}

bool SynthFileChooserUIImpl$FilterComboBoxRenderer::$assertionsDisabled = false;

void SynthFileChooserUIImpl$FilterComboBoxRenderer::init$($SynthFileChooserUIImpl* this$0, $ListCellRenderer* delegate) {
	$set(this, this$0, this$0);
	$set(this, delegate, delegate);
}

$Component* SynthFileChooserUIImpl$FilterComboBoxRenderer::getListCellRendererComponent($JList* list, $FileFilter* value, int32_t index, bool isSelected, bool cellHasFocus) {
	$useLocalCurrentObjectStackCache();
	$var($Component, c, $nc(this->delegate)->getListCellRendererComponent(list, value, index, isSelected, cellHasFocus));
	$var($String, text, nullptr);
	if (value != nullptr) {
		$assign(text, value->getDescription());
	}
	if (!SynthFileChooserUIImpl$FilterComboBoxRenderer::$assertionsDisabled && !$instanceOf($JLabel, c)) {
		$throwNew($AssertionError);
	}
	if (text != nullptr) {
		$nc(($cast($JLabel, c)))->setText(text);
	}
	return c;
}

$Component* SynthFileChooserUIImpl$FilterComboBoxRenderer::getListCellRendererComponent($JList* list, Object$* value, int32_t index, bool isSelected, bool cellHasFocus) {
	return this->getListCellRendererComponent(list, $cast($FileFilter, value), index, isSelected, cellHasFocus);
}

void clinit$SynthFileChooserUIImpl$FilterComboBoxRenderer($Class* class$) {
	$load($SynthFileChooserUIImpl);
	SynthFileChooserUIImpl$FilterComboBoxRenderer::$assertionsDisabled = !$SynthFileChooserUIImpl::class$->desiredAssertionStatus();
}

SynthFileChooserUIImpl$FilterComboBoxRenderer::SynthFileChooserUIImpl$FilterComboBoxRenderer() {
}

$Class* SynthFileChooserUIImpl$FilterComboBoxRenderer::load$($String* name, bool initialize) {
	$loadClass(SynthFileChooserUIImpl$FilterComboBoxRenderer, name, initialize, &_SynthFileChooserUIImpl$FilterComboBoxRenderer_ClassInfo_, clinit$SynthFileChooserUIImpl$FilterComboBoxRenderer, allocate$SynthFileChooserUIImpl$FilterComboBoxRenderer);
	return class$;
}

$Class* SynthFileChooserUIImpl$FilterComboBoxRenderer::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // sun