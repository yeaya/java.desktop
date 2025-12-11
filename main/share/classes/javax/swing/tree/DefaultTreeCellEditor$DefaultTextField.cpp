#include <javax/swing/tree/DefaultTreeCellEditor$DefaultTextField.h>

#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/FontUIResource.h>
#include <javax/swing/tree/DefaultTreeCellEditor.h>
#include <javax/swing/tree/DefaultTreeCellRenderer.h>
#include <jcpp.h>

using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $JTextField = ::javax::swing::JTextField;
using $Border = ::javax::swing::border::Border;
using $FontUIResource = ::javax::swing::plaf::FontUIResource;
using $DefaultTreeCellEditor = ::javax::swing::tree::DefaultTreeCellEditor;
using $DefaultTreeCellRenderer = ::javax::swing::tree::DefaultTreeCellRenderer;

namespace javax {
	namespace swing {
		namespace tree {

$NamedAttribute DefaultTreeCellEditor$DefaultTextField_Attribute_var$0[] = {
	{"preferred", 'Z', "true"},
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "The component\'s border."},
	{}
};

$CompoundAttribute _DefaultTreeCellEditor$DefaultTextField_MethodAnnotations_setBorder4[] = {
	{"Ljava/beans/BeanProperty;", DefaultTreeCellEditor$DefaultTextField_Attribute_var$0},
	{}
};

$FieldInfo _DefaultTreeCellEditor$DefaultTextField_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/tree/DefaultTreeCellEditor;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultTreeCellEditor$DefaultTextField, this$0)},
	{"border", "Ljavax/swing/border/Border;", nullptr, $PROTECTED, $field(DefaultTreeCellEditor$DefaultTextField, border)},
	{}
};

$MethodInfo _DefaultTreeCellEditor$DefaultTextField_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/tree/DefaultTreeCellEditor;Ljavax/swing/border/Border;)V", nullptr, $PUBLIC, $method(static_cast<void(DefaultTreeCellEditor$DefaultTextField::*)($DefaultTreeCellEditor*,$Border*)>(&DefaultTreeCellEditor$DefaultTextField::init$))},
	{"getBorder", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC},
	{"getFont", "()Ljava/awt/Font;", nullptr, $PUBLIC},
	{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"setBorder", "(Ljavax/swing/border/Border;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _DefaultTreeCellEditor$DefaultTextField_MethodAnnotations_setBorder4},
	{}
};

$InnerClassInfo _DefaultTreeCellEditor$DefaultTextField_InnerClassesInfo_[] = {
	{"javax.swing.tree.DefaultTreeCellEditor$DefaultTextField", "javax.swing.tree.DefaultTreeCellEditor", "DefaultTextField", $PUBLIC},
	{}
};

$ClassInfo _DefaultTreeCellEditor$DefaultTextField_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.tree.DefaultTreeCellEditor$DefaultTextField",
	"javax.swing.JTextField",
	nullptr,
	_DefaultTreeCellEditor$DefaultTextField_FieldInfo_,
	_DefaultTreeCellEditor$DefaultTextField_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultTreeCellEditor$DefaultTextField_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.tree.DefaultTreeCellEditor"
};

$Object* allocate$DefaultTreeCellEditor$DefaultTextField($Class* clazz) {
	return $of($alloc(DefaultTreeCellEditor$DefaultTextField));
}

void DefaultTreeCellEditor$DefaultTextField::init$($DefaultTreeCellEditor* this$0, $Border* border) {
	$set(this, this$0, this$0);
	$JTextField::init$();
	setBorder(border);
}

void DefaultTreeCellEditor$DefaultTextField::setBorder($Border* border) {
	$JTextField::setBorder(border);
	$set(this, border, border);
}

$Border* DefaultTreeCellEditor$DefaultTextField::getBorder() {
	return this->border;
}

$Font* DefaultTreeCellEditor$DefaultTextField::getFont() {
	$useLocalCurrentObjectStackCache();
	$var($Font, font, $JTextField::getFont());
	if ($instanceOf($FontUIResource, font)) {
		$var($Container, parent, getParent());
		if (parent != nullptr && parent->getFont() != nullptr) {
			$assign(font, parent->getFont());
		}
	}
	return font;
}

$Dimension* DefaultTreeCellEditor$DefaultTextField::getPreferredSize() {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, size, $JTextField::getPreferredSize());
	if (this->this$0->renderer != nullptr && this->this$0->getFont() == nullptr) {
		$var($Dimension, rSize, $nc(this->this$0->renderer)->getPreferredSize());
		$nc(size)->height = $nc(rSize)->height;
	}
	return size;
}

DefaultTreeCellEditor$DefaultTextField::DefaultTreeCellEditor$DefaultTextField() {
}

$Class* DefaultTreeCellEditor$DefaultTextField::load$($String* name, bool initialize) {
	$loadClass(DefaultTreeCellEditor$DefaultTextField, name, initialize, &_DefaultTreeCellEditor$DefaultTextField_ClassInfo_, allocate$DefaultTreeCellEditor$DefaultTextField);
	return class$;
}

$Class* DefaultTreeCellEditor$DefaultTextField::class$ = nullptr;

		} // tree
	} // swing
} // javax