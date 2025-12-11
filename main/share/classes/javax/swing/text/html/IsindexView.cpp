#include <javax/swing/text/html/IsindexView.h>

#include <java/awt/BorderLayout.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/io/IOException.h>
#include <java/net/MalformedURLException.h>
#include <java/net/URL.h>
#include <java/net/URLEncoder.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/ComponentView.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/html/HTML$Attribute.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <jcpp.h>

#undef ACTION
#undef CENTER
#undef PROMPT
#undef WEST

using $BorderLayout = ::java::awt::BorderLayout;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;
using $MalformedURLException = ::java::net::MalformedURLException;
using $URL = ::java::net::URL;
using $URLEncoder = ::java::net::URLEncoder;
using $JComponent = ::javax::swing::JComponent;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JLabel = ::javax::swing::JLabel;
using $JPanel = ::javax::swing::JPanel;
using $JTextField = ::javax::swing::JTextField;
using $UIManager = ::javax::swing::UIManager;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $ComponentView = ::javax::swing::text::ComponentView;
using $Element = ::javax::swing::text::Element;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $HTML$Attribute = ::javax::swing::text::html::HTML$Attribute;
using $HTMLDocument = ::javax::swing::text::html::HTMLDocument;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _IsindexView_FieldInfo_[] = {
	{"textField", "Ljavax/swing/JTextField;", nullptr, 0, $field(IsindexView, textField)},
	{}
};

$MethodInfo _IsindexView_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/text/Element;)V", nullptr, $PUBLIC, $method(static_cast<void(IsindexView::*)($Element*)>(&IsindexView::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"createComponent", "()Ljava/awt/Component;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _IsindexView_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.IsindexView",
	"javax.swing.text.ComponentView",
	"java.awt.event.ActionListener",
	_IsindexView_FieldInfo_,
	_IsindexView_MethodInfo_
};

$Object* allocate$IsindexView($Class* clazz) {
	return $of($alloc(IsindexView));
}

int32_t IsindexView::hashCode() {
	 return this->$ComponentView::hashCode();
}

bool IsindexView::equals(Object$* arg0) {
	 return this->$ComponentView::equals(arg0);
}

$Object* IsindexView::clone() {
	 return this->$ComponentView::clone();
}

$String* IsindexView::toString() {
	 return this->$ComponentView::toString();
}

void IsindexView::finalize() {
	this->$ComponentView::finalize();
}

void IsindexView::init$($Element* elem) {
	$ComponentView::init$(elem);
}

$Component* IsindexView::createComponent() {
	$useLocalCurrentObjectStackCache();
	$var($AttributeSet, attr, $nc($(getElement()))->getAttributes());
	$var($JPanel, panel, $new($JPanel, static_cast<$LayoutManager*>($$new($BorderLayout))));
	panel->setBackground(nullptr);
	$init($HTML$Attribute);
	$var($String, prompt, $cast($String, $nc(attr)->getAttribute($HTML$Attribute::PROMPT)));
	if (prompt == nullptr) {
		$assign(prompt, $UIManager::getString("IsindexView.prompt"_s));
	}
	$var($JLabel, label, $new($JLabel, prompt));
	$set(this, textField, $new($JTextField));
	$nc(this->textField)->addActionListener(this);
	$init($BorderLayout);
	panel->add(static_cast<$Component*>(label), $of($BorderLayout::WEST));
	panel->add(static_cast<$Component*>(this->textField), $of($BorderLayout::CENTER));
	panel->setAlignmentY(1.0f);
	panel->setOpaque(false);
	return panel;
}

void IsindexView::actionPerformed($ActionEvent* evt) {
	$useLocalCurrentObjectStackCache();
	$var($String, data, $nc(this->textField)->getText());
	if (data != nullptr) {
		$assign(data, $URLEncoder::encode(data));
	}
	$var($AttributeSet, attr, $nc($(getElement()))->getAttributes());
	$var($HTMLDocument, hdoc, $cast($HTMLDocument, $nc($(getElement()))->getDocument()));
	$init($HTML$Attribute);
	$var($String, action, $cast($String, $nc(attr)->getAttribute($HTML$Attribute::ACTION)));
	if (action == nullptr) {
		$assign(action, $nc($($nc(hdoc)->getBase()))->toString());
	}
	try {
		$var($URL, url, $new($URL, $$str({action, "?"_s, data})));
		$var($JEditorPane, pane, $cast($JEditorPane, getContainer()));
		$nc(pane)->setPage(url);
	} catch ($MalformedURLException& e1) {
	} catch ($IOException& e2) {
	}
}

IsindexView::IsindexView() {
}

$Class* IsindexView::load$($String* name, bool initialize) {
	$loadClass(IsindexView, name, initialize, &_IsindexView_ClassInfo_, allocate$IsindexView);
	return class$;
}

$Class* IsindexView::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax