#include <javax/swing/text/html/FormView.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Point.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/ItemListener.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseListener.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/MalformedURLException.h>
#include <java/net/URL.h>
#include <java/net/URLEncoder.h>
#include <java/util/BitSet.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/AbstractListModel.h>
#include <javax/swing/Box.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/ComboBoxModel.h>
#include <javax/swing/DefaultButtonModel.h>
#include <javax/swing/Icon.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JCheckBox.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JList.h>
#include <javax/swing/JPasswordField.h>
#include <javax/swing/JRadioButton.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/JToggleButton$ToggleButtonModel.h>
#include <javax/swing/JToggleButton.h>
#include <javax/swing/ListModel.h>
#include <javax/swing/ListSelectionModel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/event/DocumentListener.h>
#include <javax/swing/event/HyperlinkEvent$EventType.h>
#include <javax/swing/event/ListDataListener.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/ComponentView.h>
#include <javax/swing/text/DefaultStyledDocument.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/EditorKit.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/ElementIterator.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/PlainDocument.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/html/FormSubmitEvent$MethodType.h>
#include <javax/swing/text/html/FormSubmitEvent.h>
#include <javax/swing/text/html/FormView$1.h>
#include <javax/swing/text/html/FormView$BrowseFileAction.h>
#include <javax/swing/text/html/FormView$MouseEventListener.h>
#include <javax/swing/text/html/FrameView$FrameEditorPane.h>
#include <javax/swing/text/html/FrameView.h>
#include <javax/swing/text/html/HTML$Attribute.h>
#include <javax/swing/text/html/HTML$Tag.h>
#include <javax/swing/text/html/HTML.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <javax/swing/text/html/HTMLEditorKit.h>
#include <javax/swing/text/html/Option.h>
#include <javax/swing/text/html/OptionComboBoxModel.h>
#include <javax/swing/text/html/OptionListModel.h>
#include <javax/swing/text/html/TextAreaDocument.h>
#include <jcpp.h>

#undef ACTION
#undef ACTIVATED
#undef CHECKED
#undef COLS
#undef FORM
#undef GET
#undef HORIZONTAL_SCROLLBAR_ALWAYS
#undef INPUT
#undef METHOD
#undef NAME
#undef POST
#undef RESET
#undef ROWS
#undef SELECT
#undef SIZE
#undef SRC
#undef SUBMIT
#undef TARGET
#undef TEXTAREA
#undef TYPE
#undef VALUE
#undef VERTICAL_SCROLLBAR_ALWAYS
#undef X_AXIS
#undef Y_AXIS

using $ActionListenerArray = $Array<::java::awt::event::ActionListener>;
using $ItemListenerArray = $Array<::java::awt::event::ItemListener>;
using $ChangeListenerArray = $Array<::javax::swing::event::ChangeListener>;
using $DocumentListenerArray = $Array<::javax::swing::event::DocumentListener>;
using $ListDataListenerArray = $Array<::javax::swing::event::ListDataListener>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Point = ::java::awt::Point;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ItemListener = ::java::awt::event::ItemListener;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseListener = ::java::awt::event::MouseListener;
using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $MalformedURLException = ::java::net::MalformedURLException;
using $URL = ::java::net::URL;
using $URLEncoder = ::java::net::URLEncoder;
using $BitSet = ::java::util::BitSet;
using $AbstractButton = ::javax::swing::AbstractButton;
using $AbstractListModel = ::javax::swing::AbstractListModel;
using $Box = ::javax::swing::Box;
using $ButtonModel = ::javax::swing::ButtonModel;
using $ComboBoxModel = ::javax::swing::ComboBoxModel;
using $DefaultButtonModel = ::javax::swing::DefaultButtonModel;
using $DefaultComboBoxModel = ::javax::swing::DefaultComboBoxModel;
using $DefaultListModel = ::javax::swing::DefaultListModel;
using $Icon = ::javax::swing::Icon;
using $ImageIcon = ::javax::swing::ImageIcon;
using $JButton = ::javax::swing::JButton;
using $JCheckBox = ::javax::swing::JCheckBox;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JList = ::javax::swing::JList;
using $JPasswordField = ::javax::swing::JPasswordField;
using $JRadioButton = ::javax::swing::JRadioButton;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTextArea = ::javax::swing::JTextArea;
using $JTextField = ::javax::swing::JTextField;
using $JToggleButton = ::javax::swing::JToggleButton;
using $JToggleButton$ToggleButtonModel = ::javax::swing::JToggleButton$ToggleButtonModel;
using $ListModel = ::javax::swing::ListModel;
using $ListSelectionModel = ::javax::swing::ListSelectionModel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $DocumentListener = ::javax::swing::event::DocumentListener;
using $HyperlinkEvent$EventType = ::javax::swing::event::HyperlinkEvent$EventType;
using $ListDataListener = ::javax::swing::event::ListDataListener;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $ComponentView = ::javax::swing::text::ComponentView;
using $DefaultStyledDocument = ::javax::swing::text::DefaultStyledDocument;
using $Document = ::javax::swing::text::Document;
using $EditorKit = ::javax::swing::text::EditorKit;
using $Element = ::javax::swing::text::Element;
using $ElementIterator = ::javax::swing::text::ElementIterator;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $PlainDocument = ::javax::swing::text::PlainDocument;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $View = ::javax::swing::text::View;
using $FormSubmitEvent = ::javax::swing::text::html::FormSubmitEvent;
using $FormSubmitEvent$MethodType = ::javax::swing::text::html::FormSubmitEvent$MethodType;
using $FormView$1 = ::javax::swing::text::html::FormView$1;
using $FormView$BrowseFileAction = ::javax::swing::text::html::FormView$BrowseFileAction;
using $FormView$MouseEventListener = ::javax::swing::text::html::FormView$MouseEventListener;
using $FrameView = ::javax::swing::text::html::FrameView;
using $FrameView$FrameEditorPane = ::javax::swing::text::html::FrameView$FrameEditorPane;
using $HTML = ::javax::swing::text::html::HTML;
using $HTML$Attribute = ::javax::swing::text::html::HTML$Attribute;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;
using $HTMLDocument = ::javax::swing::text::html::HTMLDocument;
using $HTMLEditorKit = ::javax::swing::text::html::HTMLEditorKit;
using $Option = ::javax::swing::text::html::Option;
using $OptionComboBoxModel = ::javax::swing::text::html::OptionComboBoxModel;
using $OptionListModel = ::javax::swing::text::html::OptionListModel;
using $TextAreaDocument = ::javax::swing::text::html::TextAreaDocument;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$CompoundAttribute _FormView_FieldAnnotations_SUBMIT[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _FormView_FieldAnnotations_RESET[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _FormView_FieldInfo_[] = {
	{"SUBMIT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $staticField(FormView, SUBMIT), _FormView_FieldAnnotations_SUBMIT},
	{"RESET", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $staticField(FormView, RESET), _FormView_FieldAnnotations_RESET},
	{"PostDataProperty", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(FormView, PostDataProperty)},
	{"maxIsPreferred", "S", nullptr, $PRIVATE, $field(FormView, maxIsPreferred)},
	{}
};

$MethodInfo _FormView_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/text/Element;)V", nullptr, $PUBLIC, $method(static_cast<void(FormView::*)($Element*)>(&FormView::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"appendBuffer", "(Ljava/lang/StringBuilder;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(FormView::*)($StringBuilder*,$String*,$String*)>(&FormView::appendBuffer))},
	{"createComponent", "()Ljava/awt/Component;", nullptr, $PROTECTED},
	{"createInputComponent", "(Ljavax/swing/text/AttributeSet;Ljava/lang/Object;)Ljavax/swing/JComponent;", nullptr, $PRIVATE, $method(static_cast<$JComponent*(FormView::*)($AttributeSet*,Object$*)>(&FormView::createInputComponent))},
	{"getFormData", "(Ljava/lang/StringBuilder;)V", nullptr, $PRIVATE, $method(static_cast<void(FormView::*)($StringBuilder*)>(&FormView::getFormData))},
	{"getFormElement", "()Ljavax/swing/text/Element;", nullptr, $PRIVATE, $method(static_cast<$Element*(FormView::*)()>(&FormView::getFormElement))},
	{"getImageData", "(Ljava/awt/Point;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(FormView::*)($Point*)>(&FormView::getImageData))},
	{"getInputElementData", "(Ljavax/swing/text/AttributeSet;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(FormView::*)($AttributeSet*)>(&FormView::getInputElementData))},
	{"getMaximumSpan", "(I)F", nullptr, $PUBLIC},
	{"getTextAreaData", "(Ljavax/swing/text/AttributeSet;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(FormView::*)($AttributeSet*)>(&FormView::getTextAreaData))},
	{"imageSubmit", "(Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"isControl", "(Ljavax/swing/text/Element;)Z", nullptr, $PRIVATE, $method(static_cast<bool(FormView::*)($Element*)>(&FormView::isControl))},
	{"isLastTextOrPasswordField", "()Z", nullptr, 0},
	{"loadElementDataIntoBuffer", "(Ljavax/swing/text/Element;Ljava/lang/StringBuilder;)V", nullptr, $PRIVATE, $method(static_cast<void(FormView::*)($Element*,$StringBuilder*)>(&FormView::loadElementDataIntoBuffer))},
	{"loadSelectData", "(Ljavax/swing/text/AttributeSet;Ljava/lang/StringBuilder;)V", nullptr, $PRIVATE, $method(static_cast<void(FormView::*)($AttributeSet*,$StringBuilder*)>(&FormView::loadSelectData))},
	{"removeStaleListenerForModel", "(Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(static_cast<void(FormView::*)(Object$*)>(&FormView::removeStaleListenerForModel))},
	{"resetForm", "()V", nullptr, 0},
	{"storePostData", "(Ljavax/swing/text/html/HTMLDocument;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(FormView::*)($HTMLDocument*,$String*,$String*)>(&FormView::storePostData))},
	{"submitData", "(Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FormView_InnerClassesInfo_[] = {
	{"javax.swing.text.html.FormView$BrowseFileAction", "javax.swing.text.html.FormView", "BrowseFileAction", $PRIVATE},
	{"javax.swing.text.html.FormView$MouseEventListener", "javax.swing.text.html.FormView", "MouseEventListener", $PROTECTED},
	{"javax.swing.text.html.FormView$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FormView_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.html.FormView",
	"javax.swing.text.ComponentView",
	"java.awt.event.ActionListener",
	_FormView_FieldInfo_,
	_FormView_MethodInfo_,
	nullptr,
	nullptr,
	_FormView_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.text.html.FormView$BrowseFileAction,javax.swing.text.html.FormView$MouseEventListener,javax.swing.text.html.FormView$1"
};

$Object* allocate$FormView($Class* clazz) {
	return $of($alloc(FormView));
}

int32_t FormView::hashCode() {
	 return this->$ComponentView::hashCode();
}

bool FormView::equals(Object$* arg0) {
	 return this->$ComponentView::equals(arg0);
}

$Object* FormView::clone() {
	 return this->$ComponentView::clone();
}

$String* FormView::toString() {
	 return this->$ComponentView::toString();
}

void FormView::finalize() {
	this->$ComponentView::finalize();
}


$String* FormView::SUBMIT = nullptr;

$String* FormView::RESET = nullptr;

$String* FormView::PostDataProperty = nullptr;

void FormView::init$($Element* elem) {
	$ComponentView::init$(elem);
}

$Component* FormView::createComponent() {
	$var($AttributeSet, attr, $nc($(getElement()))->getAttributes());
	$init($StyleConstants);
	$var($HTML$Tag, t, $cast($HTML$Tag, $nc(attr)->getAttribute($StyleConstants::NameAttribute)));
	$var($JComponent, c, nullptr);
	$var($Object, model, attr->getAttribute($StyleConstants::ModelAttribute));
	removeStaleListenerForModel(model);
	$init($HTML$Tag);
	if (t == $HTML$Tag::INPUT) {
		$assign(c, createInputComponent(attr, model));
	} else {
		if (t == $HTML$Tag::SELECT) {
			if ($instanceOf($OptionListModel, model)) {
				$var($JList, list, $new($JList, $cast($ListModel, model)));
				$init($HTML$Attribute);
				int32_t size = $HTML::getIntegerAttributeValue(attr, $HTML$Attribute::SIZE, 1);
				list->setVisibleRowCount(size);
				list->setSelectionModel($cast($ListSelectionModel, model));
				$assign(c, $new($JScrollPane, list));
			} else {
				$var($JComboBox, tmp, $new($JComboBox, $cast($ComboBoxModel, model)));
				$assign(c, tmp);
				this->maxIsPreferred = (int16_t)3;
			}
		} else {
			if (t == $HTML$Tag::TEXTAREA) {
				$var($JTextArea, area, $new($JTextArea, $cast($Document, model)));
				$init($HTML$Attribute);
				int32_t rows = $HTML::getIntegerAttributeValue(attr, $HTML$Attribute::ROWS, 1);
				area->setRows(rows);
				int32_t cols = $HTML::getIntegerAttributeValue(attr, $HTML$Attribute::COLS, 20);
				this->maxIsPreferred = (int16_t)3;
				area->setColumns(cols);
				$assign(c, $new($JScrollPane, area, $JScrollPane::VERTICAL_SCROLLBAR_ALWAYS, $JScrollPane::HORIZONTAL_SCROLLBAR_ALWAYS));
			}
		}
	}
	if (c != nullptr) {
		c->setAlignmentY(1.0f);
	}
	return c;
}

$JComponent* FormView::createInputComponent($AttributeSet* attr, Object$* model) {
	$var($JComponent, c, nullptr);
	$init($HTML$Attribute);
	$var($String, type, $cast($String, $nc(attr)->getAttribute($HTML$Attribute::TYPE)));
	bool var$0 = $nc(type)->equals("submit"_s);
	if (var$0 || $nc(type)->equals("reset"_s)) {
		$var($String, value, $cast($String, attr->getAttribute($HTML$Attribute::VALUE)));
		if (value == nullptr) {
			if (type->equals("submit"_s)) {
				$assign(value, $UIManager::getString("FormView.submitButtonText"_s));
			} else {
				$assign(value, $UIManager::getString("FormView.resetButtonText"_s));
			}
		}
		$var($JButton, button, $new($JButton, value));
		if (model != nullptr) {
			button->setModel($cast($ButtonModel, model));
			button->addActionListener(this);
		}
		$assign(c, button);
		this->maxIsPreferred = (int16_t)3;
	} else if (type->equals("image"_s)) {
		$var($String, srcAtt, $cast($String, attr->getAttribute($HTML$Attribute::SRC)));
		$var($JButton, button, nullptr);
		try {
			$var($URL, base, $nc(($cast($HTMLDocument, $($nc($(getElement()))->getDocument()))))->getBase());
			$var($URL, srcURL, $new($URL, base, srcAtt));
			$var($Icon, icon, $new($ImageIcon, srcURL));
			$assign(button, $new($JButton, icon));
		} catch ($MalformedURLException&) {
			$var($MalformedURLException, e, $catch());
			$assign(button, $new($JButton, srcAtt));
		}
		if (model != nullptr) {
			$nc(button)->setModel($cast($ButtonModel, model));
			button->addMouseListener($$new($FormView$MouseEventListener, this));
		}
		$assign(c, button);
		this->maxIsPreferred = (int16_t)3;
	} else if (type->equals("checkbox"_s)) {
		$assign(c, $new($JCheckBox));
		if (model != nullptr) {
			$nc(($cast($JCheckBox, c)))->setModel($cast($JToggleButton$ToggleButtonModel, model));
		}
		this->maxIsPreferred = (int16_t)3;
	} else if (type->equals("radio"_s)) {
		$assign(c, $new($JRadioButton));
		if (model != nullptr) {
			$nc(($cast($JRadioButton, c)))->setModel($cast($JToggleButton$ToggleButtonModel, model));
		}
		this->maxIsPreferred = (int16_t)3;
	} else if (type->equals("text"_s)) {
		int32_t size = $HTML::getIntegerAttributeValue(attr, $HTML$Attribute::SIZE, -1);
		$var($JTextField, field, nullptr);
		if (size > 0) {
			$assign(field, $new($JTextField));
			field->setColumns(size);
		} else {
			$assign(field, $new($JTextField));
			field->setColumns(20);
		}
		$assign(c, field);
		if (model != nullptr) {
			$nc(field)->setDocument($cast($Document, model));
		}
		$nc(field)->addActionListener(this);
		this->maxIsPreferred = (int16_t)3;
	} else if (type->equals("password"_s)) {
		$var($JPasswordField, field, $new($JPasswordField));
		$assign(c, field);
		if (model != nullptr) {
			field->setDocument($cast($Document, model));
		}
		int32_t size = $HTML::getIntegerAttributeValue(attr, $HTML$Attribute::SIZE, -1);
		field->setColumns((size > 0) ? size : 20);
		field->addActionListener(this);
		this->maxIsPreferred = (int16_t)3;
	} else if (type->equals("file"_s)) {
		$var($JTextField, field, $new($JTextField));
		if (model != nullptr) {
			field->setDocument($cast($Document, model));
		}
		int32_t size = $HTML::getIntegerAttributeValue(attr, $HTML$Attribute::SIZE, -1);
		field->setColumns((size > 0) ? size : 20);
		$var($JButton, browseButton, $new($JButton, $($UIManager::getString("FormView.browseFileButtonText"_s))));
		$var($Box, box, $Box::createHorizontalBox());
		$nc(box)->add(static_cast<$Component*>(field));
		box->add($($Box::createHorizontalStrut(5)));
		box->add(static_cast<$Component*>(browseButton));
		browseButton->addActionListener($$new($FormView$BrowseFileAction, this, attr, $cast($Document, model)));
		$assign(c, box);
		this->maxIsPreferred = (int16_t)3;
	}
	return c;
}

void FormView::removeStaleListenerForModel(Object$* model) {
	if ($instanceOf($DefaultButtonModel, model)) {
		$var($DefaultButtonModel, buttonModel, $cast($DefaultButtonModel, model));
		$var($String, listenerClass, "javax.swing.AbstractButton$Handler"_s);
		{
			$var($ActionListenerArray, arr$, $nc(buttonModel)->getActionListeners());
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($ActionListener, listener, arr$->get(i$));
				{
					if (listenerClass->equals($($nc($of(listener))->getClass()->getName()))) {
						buttonModel->removeActionListener(listener);
					}
				}
			}
		}
		{
			$var($ChangeListenerArray, arr$, buttonModel->getChangeListeners());
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($ChangeListener, listener, arr$->get(i$));
				{
					if (listenerClass->equals($($nc($of(listener))->getClass()->getName()))) {
						buttonModel->removeChangeListener(listener);
					}
				}
			}
		}
		{
			$var($ItemListenerArray, arr$, buttonModel->getItemListeners());
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($ItemListener, listener, arr$->get(i$));
				{
					if (listenerClass->equals($($nc($of(listener))->getClass()->getName()))) {
						buttonModel->removeItemListener(listener);
					}
				}
			}
		}
	} else if ($instanceOf($AbstractListModel, model)) {
		$var($AbstractListModel, listModel, $cast($AbstractListModel, model));
		$var($String, listenerClass1, "javax.swing.plaf.basic.BasicListUI$Handler"_s);
		$var($String, listenerClass2, "javax.swing.plaf.basic.BasicComboBoxUI$Handler"_s);
		{
			$var($ListDataListenerArray, arr$, $nc(listModel)->getListDataListeners());
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($ListDataListener, listener, arr$->get(i$));
				{
					bool var$0 = listenerClass1->equals($($nc($of(listener))->getClass()->getName()));
					if (var$0 || listenerClass2->equals($($nc($of(listener))->getClass()->getName()))) {
						listModel->removeListDataListener(listener);
					}
				}
			}
		}
	} else if ($instanceOf($AbstractDocument, model)) {
		$var($String, listenerClass1, "javax.swing.plaf.basic.BasicTextUI$UpdateHandler"_s);
		$var($String, listenerClass2, "javax.swing.text.DefaultCaret$Handler"_s);
		$var($AbstractDocument, docModel, $cast($AbstractDocument, model));
		{
			$var($DocumentListenerArray, arr$, $nc(docModel)->getDocumentListeners());
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($DocumentListener, listener, arr$->get(i$));
				{
					bool var$1 = listenerClass1->equals($($nc($of(listener))->getClass()->getName()));
					if (var$1 || listenerClass2->equals($($nc($of(listener))->getClass()->getName()))) {
						docModel->removeDocumentListener(listener);
					}
				}
			}
		}
	}
}

float FormView::getMaximumSpan(int32_t axis) {
	switch (axis) {
	case $View::X_AXIS:
		{
			if (((int32_t)(this->maxIsPreferred & (uint32_t)1)) == 1) {
				$ComponentView::getMaximumSpan(axis);
				return getPreferredSpan(axis);
			}
			return $ComponentView::getMaximumSpan(axis);
		}
	case $View::Y_AXIS:
		{
			if (((int32_t)(this->maxIsPreferred & (uint32_t)2)) == 2) {
				$ComponentView::getMaximumSpan(axis);
				return getPreferredSpan(axis);
			}
			return $ComponentView::getMaximumSpan(axis);
		}
	default:
		{
			break;
		}
	}
	return $ComponentView::getMaximumSpan(axis);
}

void FormView::actionPerformed($ActionEvent* evt) {
	$var($Element, element, getElement());
	$var($StringBuilder, dataBuffer, $new($StringBuilder));
	$var($HTMLDocument, doc, $cast($HTMLDocument, getDocument()));
	$var($AttributeSet, attr, $nc(element)->getAttributes());
	$init($HTML$Attribute);
	$var($String, type, $cast($String, $nc(attr)->getAttribute($HTML$Attribute::TYPE)));
	if ($nc(type)->equals("submit"_s)) {
		getFormData(dataBuffer);
		submitData($(dataBuffer->toString()));
	} else if (type->equals("reset"_s)) {
		resetForm();
	} else {
		bool var$1 = type->equals("text"_s);
		if (var$1 || type->equals("password"_s)) {
			if (isLastTextOrPasswordField()) {
				getFormData(dataBuffer);
				submitData($(dataBuffer->toString()));
			} else {
				$nc($(getComponent()))->transferFocus();
			}
		}
	}
}

void FormView::submitData($String* data) {
	$var($Element, form, getFormElement());
	$var($AttributeSet, attrs, $nc(form)->getAttributes());
	$var($HTMLDocument, doc, $cast($HTMLDocument, form->getDocument()));
	$var($URL, base, $nc(doc)->getBase());
	$init($HTML$Attribute);
	$var($String, target, $cast($String, $nc(attrs)->getAttribute($HTML$Attribute::TARGET)));
	if (target == nullptr) {
		$assign(target, "_self"_s);
	}
	$var($String, method, $cast($String, attrs->getAttribute($HTML$Attribute::METHOD)));
	if (method == nullptr) {
		$assign(method, "GET"_s);
	}
	$assign(method, $nc(method)->toLowerCase());
	bool isPostMethod = method->equals("post"_s);
	if (isPostMethod) {
		storePostData(doc, target, data);
	}
	$var($String, action, $cast($String, attrs->getAttribute($HTML$Attribute::ACTION)));
	$var($URL, actionURL, nullptr);
	try {
		$var($URL, var$0, nullptr);
		if (action == nullptr) {
			$var($String, var$1, $nc(base)->getProtocol());
			$var($String, var$2, base->getHost());
			int32_t var$3 = base->getPort();
			$assign(var$0, $new($URL, var$1, var$2, var$3, $(base->getFile())));
		} else {
			$assign(var$0, $new($URL, base, action));
		}
		$assign(actionURL, var$0);
		if (!isPostMethod) {
			$var($String, query, $nc(data)->toString());
			$assign(actionURL, $new($URL, $$str({actionURL, "?"_s, query})));
		}
	} catch ($MalformedURLException&) {
		$var($MalformedURLException, e, $catch());
		$assign(actionURL, nullptr);
	}
	$var($JEditorPane, c, $cast($JEditorPane, getContainer()));
	$var($HTMLEditorKit, kit, $cast($HTMLEditorKit, $nc(c)->getEditorKit()));
	$var($FormSubmitEvent, formEvent, nullptr);
	bool var$4 = !$nc(kit)->isAutoFormSubmission();
	if (var$4 || doc->isFrameDocument()) {
		$init($FormSubmitEvent$MethodType);
		$FormSubmitEvent$MethodType* methodType = isPostMethod ? $FormSubmitEvent$MethodType::POST : $FormSubmitEvent$MethodType::GET;
		$init($HyperlinkEvent$EventType);
		$assign(formEvent, $new($FormSubmitEvent, this, $HyperlinkEvent$EventType::ACTIVATED, actionURL, form, target, methodType, data));
	}
	$var($FormSubmitEvent, fse, formEvent);
	$var($URL, url, actionURL);
	$SwingUtilities::invokeLater($$new($FormView$1, this, fse, c, url));
}

void FormView::storePostData($HTMLDocument* doc, $String* target, $String* data) {
	$var($Document, propDoc, static_cast<$Document*>(static_cast<$AbstractDocument*>(static_cast<$DefaultStyledDocument*>(doc))));
	$var($String, propName, FormView::PostDataProperty);
	if ($nc(doc)->isFrameDocument()) {
		$var($FrameView$FrameEditorPane, p, $cast($FrameView$FrameEditorPane, getContainer()));
		$var($FrameView, v, $nc(p)->getFrameView());
		$var($JEditorPane, c, $nc(v)->getOutermostJEditorPane());
		if (c != nullptr) {
			$assign(propDoc, c->getDocument());
			$plusAssign(propName, ($$str({"."_s, target})));
		}
	}
	$nc(propDoc)->putProperty(propName, data);
}

void FormView::imageSubmit($String* imageData) {
	$var($StringBuilder, dataBuffer, $new($StringBuilder));
	$var($Element, elem, getElement());
	$var($HTMLDocument, hdoc, $cast($HTMLDocument, $nc(elem)->getDocument()));
	getFormData(dataBuffer);
	if (dataBuffer->length() > 0) {
		dataBuffer->append(u'&');
	}
	dataBuffer->append(imageData);
	submitData($(dataBuffer->toString()));
	return;
}

$String* FormView::getImageData($Point* point) {
	$var($String, mouseCoords, $str({$$str($nc(point)->x), ":"_s, $$str(point->y)}));
	int32_t sep = $nc(mouseCoords)->indexOf((int32_t)u':');
	$var($String, x, mouseCoords->substring(0, sep));
	$var($String, y, mouseCoords->substring(++sep));
	$init($HTML$Attribute);
	$var($String, name, $cast($String, $nc($($nc($(getElement()))->getAttributes()))->getAttribute($HTML$Attribute::NAME)));
	$var($String, data, nullptr);
	if (name == nullptr || $nc(name)->isEmpty()) {
		$assign(data, $str({"x="_s, x, "&y="_s, y}));
	} else {
		$assign(name, $URLEncoder::encode(name));
		$assign(data, $str({name, ".x="_s, x, "&"_s, name, ".y="_s, y}));
	}
	return data;
}

$Element* FormView::getFormElement() {
	$var($Element, elem, getElement());
	while (elem != nullptr) {
		$init($StyleConstants);
		$init($HTML$Tag);
		if ($equals($nc($(elem->getAttributes()))->getAttribute($StyleConstants::NameAttribute), $HTML$Tag::FORM)) {
			return elem;
		}
		$assign(elem, elem->getParentElement());
	}
	return nullptr;
}

void FormView::getFormData($StringBuilder* buffer) {
	$var($Element, formE, getFormElement());
	if (formE != nullptr) {
		$var($ElementIterator, it, $new($ElementIterator, formE));
		$var($Element, next, nullptr);
		while (($assign(next, it->next())) != nullptr) {
			if (isControl(next)) {
				$init($HTML$Attribute);
				$var($String, type, $cast($String, $nc($($nc(next)->getAttributes()))->getAttribute($HTML$Attribute::TYPE)));
				bool var$0 = type != nullptr && type->equals("submit"_s);
				if (var$0 && next != getElement()) {
				} else if (type == nullptr || !type->equals("image"_s)) {
					loadElementDataIntoBuffer(next, buffer);
				}
			}
		}
	}
}

void FormView::loadElementDataIntoBuffer($Element* elem, $StringBuilder* buffer) {
	$var($AttributeSet, attr, $nc(elem)->getAttributes());
	$init($HTML$Attribute);
	$var($String, name, $cast($String, $nc(attr)->getAttribute($HTML$Attribute::NAME)));
	if (name == nullptr) {
		return;
	}
	$var($String, value, nullptr);
	$init($StyleConstants);
	$var($HTML$Tag, tag, $cast($HTML$Tag, $nc($(elem->getAttributes()))->getAttribute($StyleConstants::NameAttribute)));
	$init($HTML$Tag);
	if (tag == $HTML$Tag::INPUT) {
		$assign(value, getInputElementData(attr));
	} else {
		if (tag == $HTML$Tag::TEXTAREA) {
			$assign(value, getTextAreaData(attr));
		} else {
			if (tag == $HTML$Tag::SELECT) {
				loadSelectData(attr, buffer);
			}
		}
	}
	if (name != nullptr && value != nullptr) {
		appendBuffer(buffer, name, value);
	}
}

$String* FormView::getInputElementData($AttributeSet* attr) {
	$init($StyleConstants);
	$var($Object, model, $nc(attr)->getAttribute($StyleConstants::ModelAttribute));
	$init($HTML$Attribute);
	$var($String, type, $cast($String, attr->getAttribute($HTML$Attribute::TYPE)));
	$var($String, value, nullptr);
	bool var$0 = $nc(type)->equals("text"_s);
	if (var$0 || $nc(type)->equals("password"_s)) {
		$var($Document, doc, $cast($Document, model));
		try {
			$assign(value, $nc(doc)->getText(0, doc->getLength()));
		} catch ($BadLocationException&) {
			$var($BadLocationException, e, $catch());
			$assign(value, nullptr);
		}
	} else {
		bool var$2 = type->equals("submit"_s);
		if (var$2 || type->equals("hidden"_s)) {
			$assign(value, $cast($String, attr->getAttribute($HTML$Attribute::VALUE)));
			if (value == nullptr) {
				$assign(value, ""_s);
			}
		} else {
			bool var$4 = type->equals("radio"_s);
			if (var$4 || type->equals("checkbox"_s)) {
				$var($ButtonModel, m, $cast($ButtonModel, model));
				if ($nc(m)->isSelected()) {
					$assign(value, $cast($String, attr->getAttribute($HTML$Attribute::VALUE)));
					if (value == nullptr) {
						$assign(value, "on"_s);
					}
				}
			} else if (type->equals("file"_s)) {
				$var($Document, doc, $cast($Document, model));
				$var($String, path, nullptr);
				try {
					$assign(path, $nc(doc)->getText(0, doc->getLength()));
				} catch ($BadLocationException&) {
					$var($BadLocationException, e, $catch());
					$assign(path, nullptr);
				}
				if (path != nullptr && path->length() > 0) {
					$assign(value, path);
				}
			}
		}
	}
	return value;
}

$String* FormView::getTextAreaData($AttributeSet* attr) {
	$init($StyleConstants);
	$var($Document, doc, $cast($Document, $nc(attr)->getAttribute($StyleConstants::ModelAttribute)));
	try {
		return $nc(doc)->getText(0, doc->getLength());
	} catch ($BadLocationException&) {
		$var($BadLocationException, e, $catch());
		return nullptr;
	}
	$shouldNotReachHere();
}

void FormView::loadSelectData($AttributeSet* attr, $StringBuilder* buffer) {
	$init($HTML$Attribute);
	$var($String, name, $cast($String, $nc(attr)->getAttribute($HTML$Attribute::NAME)));
	if (name == nullptr) {
		return;
	}
	$init($StyleConstants);
	$var($Object, m, attr->getAttribute($StyleConstants::ModelAttribute));
	if ($instanceOf($OptionListModel, m)) {
		$var($OptionListModel, model, $cast($OptionListModel, m));
		for (int32_t i = 0; i < $nc(model)->getSize(); ++i) {
			if (model->isSelectedIndex(i)) {
				$var($Option, option, $cast($Option, model->getElementAt(i)));
				if (option != nullptr) {
					$var($String, value, option->getValue());
					if (value != nullptr) {
						appendBuffer(buffer, name, value);
					}
				}
			}
		}
	} else if ($instanceOf($ComboBoxModel, m)) {
		$var($ComboBoxModel, model, $cast($ComboBoxModel, m));
		$var($Option, option, $cast($Option, $nc(model)->getSelectedItem()));
		if (option != nullptr) {
			$var($String, value, option->getValue());
			if (value != nullptr) {
				appendBuffer(buffer, name, value);
			}
		}
	}
}

void FormView::appendBuffer($StringBuilder* buffer, $String* name, $String* value) {
	if ($nc(buffer)->length() > 0) {
		buffer->append(u'&');
	}
	$var($String, encodedName, $URLEncoder::encode(name));
	$nc(buffer)->append(encodedName);
	buffer->append(u'=');
	$var($String, encodedValue, $URLEncoder::encode(value));
	buffer->append(encodedValue);
}

bool FormView::isControl($Element* elem) {
	return $nc(elem)->isLeaf();
}

bool FormView::isLastTextOrPasswordField() {
	$var($Element, parent, getFormElement());
	$var($Element, elem, getElement());
	if (parent != nullptr) {
		$var($ElementIterator, it, $new($ElementIterator, parent));
		$var($Element, next, nullptr);
		bool found = false;
		while (($assign(next, it->next())) != nullptr) {
			if (next == elem) {
				found = true;
			} else if (found && isControl(next)) {
				$var($AttributeSet, elemAttr, $nc(next)->getAttributes());
				$init($HTML$Tag);
				if ($HTMLDocument::matchNameAttribute(elemAttr, $HTML$Tag::INPUT)) {
					$init($HTML$Attribute);
					$var($String, type, $cast($String, $nc(elemAttr)->getAttribute($HTML$Attribute::TYPE)));
					bool var$0 = "text"_s->equals(type);
					if (var$0 || "password"_s->equals(type)) {
						return false;
					}
				}
			}
		}
	}
	return true;
}

void FormView::resetForm() {
	$var($Element, parent, getFormElement());
	if (parent != nullptr) {
		$var($ElementIterator, it, $new($ElementIterator, parent));
		$var($Element, next, nullptr);
		while (($assign(next, it->next())) != nullptr) {
			if (isControl(next)) {
				$var($AttributeSet, elemAttr, $nc(next)->getAttributes());
				$init($StyleConstants);
				$var($Object, m, $nc(elemAttr)->getAttribute($StyleConstants::ModelAttribute));
				if ($instanceOf($TextAreaDocument, m)) {
					$var($TextAreaDocument, doc, $cast($TextAreaDocument, m));
					$nc(doc)->reset();
				} else if ($instanceOf($PlainDocument, m)) {
					try {
						$var($PlainDocument, doc, $cast($PlainDocument, m));
						$nc(doc)->remove(0, doc->getLength());
						$init($HTML$Tag);
						if ($HTMLDocument::matchNameAttribute(elemAttr, $HTML$Tag::INPUT)) {
							$init($HTML$Attribute);
							$var($String, value, $cast($String, elemAttr->getAttribute($HTML$Attribute::VALUE)));
							if (value != nullptr) {
								doc->insertString(0, value, nullptr);
							}
						}
					} catch ($BadLocationException&) {
						$catch();
					}
				} else if ($instanceOf($OptionListModel, m)) {
					$var($OptionListModel, model, $cast($OptionListModel, m));
					int32_t size = $nc(model)->getSize();
					for (int32_t i = 0; i < size; ++i) {
						model->removeIndexInterval(i, i);
					}
					$var($BitSet, selectionRange, model->getInitialSelection());
					for (int32_t i = 0; i < $nc(selectionRange)->size(); ++i) {
						if (selectionRange->get(i)) {
							model->addSelectionInterval(i, i);
						}
					}
				} else if ($instanceOf($OptionComboBoxModel, m)) {
					$var($OptionComboBoxModel, model, $cast($OptionComboBoxModel, m));
					$var($Option, option, $nc(model)->getInitialSelection());
					if (option != nullptr) {
						model->setSelectedItem(option);
					}
				} else if ($instanceOf($JToggleButton$ToggleButtonModel, m)) {
					$init($HTML$Attribute);
					bool checked = ($cast($String, elemAttr->getAttribute($HTML$Attribute::CHECKED)) != nullptr);
					$var($JToggleButton$ToggleButtonModel, model, $cast($JToggleButton$ToggleButtonModel, m));
					$nc(model)->setSelected(checked);
				}
			}
		}
	}
}

void clinit$FormView($Class* class$) {
	$assignStatic(FormView::PostDataProperty, "javax.swing.JEditorPane.postdata"_s);
	$assignStatic(FormView::SUBMIT, $new($String, "Submit Query"_s));
	$assignStatic(FormView::RESET, $new($String, "Reset"_s));
}

FormView::FormView() {
}

$Class* FormView::load$($String* name, bool initialize) {
	$loadClass(FormView, name, initialize, &_FormView_ClassInfo_, clinit$FormView, allocate$FormView);
	return class$;
}

$Class* FormView::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax