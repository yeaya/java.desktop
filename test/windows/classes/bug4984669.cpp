#include <bug4984669.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/lang/Error.h>
#include <javax/swing/JApplet.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/EditorKit.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/SimpleAttributeSet.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/StyledEditorKit.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $JApplet = ::javax::swing::JApplet;
using $JComponent = ::javax::swing::JComponent;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JScrollPane = ::javax::swing::JScrollPane;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $DefaultEditorKit = ::javax::swing::text::DefaultEditorKit;
using $Document = ::javax::swing::text::Document;
using $EditorKit = ::javax::swing::text::EditorKit;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $SimpleAttributeSet = ::javax::swing::text::SimpleAttributeSet;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $StyledEditorKit = ::javax::swing::text::StyledEditorKit;

$MethodInfo _bug4984669_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4984669::*)()>(&bug4984669::init$))},
	{"init", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _bug4984669_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug4984669",
	"javax.swing.JApplet",
	nullptr,
	nullptr,
	_bug4984669_MethodInfo_
};

$Object* allocate$bug4984669($Class* clazz) {
	return $of($alloc(bug4984669));
}

void bug4984669::init$() {
	$JApplet::init$();
}

void bug4984669::init() {
	$useLocalCurrentObjectStackCache();
	$var($JEditorPane, pane, $new($JEditorPane));
	$nc($(this->getContentPane()))->add(static_cast<$Component*>($$new($JScrollPane, pane)));
	pane->setEditorKit($$new($StyledEditorKit));
	try {
		$nc($(pane->getDocument()))->insertString(0, "12   \n"_s, nullptr);
		$var($MutableAttributeSet, attrs, $new($SimpleAttributeSet));
		$StyleConstants::setFontSize(attrs, 36);
		$StyleConstants::setBold(attrs, true);
		$StyleConstants::setUnderline(attrs, true);
		$nc($(pane->getDocument()))->insertString(6, "aa\n"_s, attrs);
		$nc($(pane->getDocument()))->insertString(9, "bbb\n"_s, attrs);
		$nc($(pane->getDocument()))->insertString(13, "cccc\n"_s, attrs);
		$nc($(pane->getDocument()))->insertString(18, "ddddd\n"_s, attrs);
	} catch ($Exception& e) {
		$throwNew($Error, "Failed: Unexpected Exception"_s, e);
	}
}

bug4984669::bug4984669() {
}

$Class* bug4984669::load$($String* name, bool initialize) {
	$loadClass(bug4984669, name, initialize, &_bug4984669_ClassInfo_, allocate$bug4984669);
	return class$;
}

$Class* bug4984669::class$ = nullptr;