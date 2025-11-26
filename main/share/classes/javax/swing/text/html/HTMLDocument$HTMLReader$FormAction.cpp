#include <javax/swing/text/html/HTMLDocument$HTMLReader$FormAction.h>

#include <java/util/HashMap.h>
#include <javax/swing/ButtonGroup.h>
#include <javax/swing/DefaultButtonModel.h>
#include <javax/swing/JToggleButton$ToggleButtonModel.h>
#include <javax/swing/ListSelectionModel.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/PlainDocument.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/html/HTML$Attribute.h>
#include <javax/swing/text/html/HTML$Tag.h>
#include <javax/swing/text/html/HTML.h>
#include <javax/swing/text/html/HTMLDocument$FixedLengthDocument.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader$SpecialAction.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader$TagAction.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <javax/swing/text/html/Option.h>
#include <javax/swing/text/html/OptionComboBoxModel.h>
#include <javax/swing/text/html/OptionListModel.h>
#include <javax/swing/text/html/TextAreaDocument.h>
#include <jcpp.h>

#undef CHECKED
#undef INPUT
#undef MAXLENGTH
#undef MULTIPLE
#undef MULTIPLE_INTERVAL_SELECTION
#undef NAME
#undef OPTION
#undef SELECT
#undef SIZE
#undef TEXTAREA
#undef TYPE
#undef VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;
using $ButtonGroup = ::javax::swing::ButtonGroup;
using $DefaultButtonModel = ::javax::swing::DefaultButtonModel;
using $DefaultComboBoxModel = ::javax::swing::DefaultComboBoxModel;
using $DefaultListModel = ::javax::swing::DefaultListModel;
using $JToggleButton$ToggleButtonModel = ::javax::swing::JToggleButton$ToggleButtonModel;
using $ListSelectionModel = ::javax::swing::ListSelectionModel;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Document = ::javax::swing::text::Document;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $PlainDocument = ::javax::swing::text::PlainDocument;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $HTML = ::javax::swing::text::html::HTML;
using $HTML$Attribute = ::javax::swing::text::html::HTML$Attribute;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;
using $HTMLDocument = ::javax::swing::text::html::HTMLDocument;
using $HTMLDocument$FixedLengthDocument = ::javax::swing::text::html::HTMLDocument$FixedLengthDocument;
using $HTMLDocument$HTMLReader = ::javax::swing::text::html::HTMLDocument$HTMLReader;
using $HTMLDocument$HTMLReader$SpecialAction = ::javax::swing::text::html::HTMLDocument$HTMLReader$SpecialAction;
using $HTMLDocument$HTMLReader$TagAction = ::javax::swing::text::html::HTMLDocument$HTMLReader$TagAction;
using $Option = ::javax::swing::text::html::Option;
using $OptionComboBoxModel = ::javax::swing::text::html::OptionComboBoxModel;
using $OptionListModel = ::javax::swing::text::html::OptionListModel;
using $TextAreaDocument = ::javax::swing::text::html::TextAreaDocument;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _HTMLDocument$HTMLReader$FormAction_FieldInfo_[] = {
	{"this$1", "Ljavax/swing/text/html/HTMLDocument$HTMLReader;", nullptr, $FINAL | $SYNTHETIC, $field(HTMLDocument$HTMLReader$FormAction, this$1)},
	{"selectModel", "Ljava/lang/Object;", nullptr, 0, $field(HTMLDocument$HTMLReader$FormAction, selectModel)},
	{"optionCount", "I", nullptr, 0, $field(HTMLDocument$HTMLReader$FormAction, optionCount)},
	{}
};

$MethodInfo _HTMLDocument$HTMLReader$FormAction_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/html/HTMLDocument$HTMLReader;)V", nullptr, $PUBLIC, $method(static_cast<void(HTMLDocument$HTMLReader$FormAction::*)($HTMLDocument$HTMLReader*)>(&HTMLDocument$HTMLReader$FormAction::init$))},
	{"end", "(Ljavax/swing/text/html/HTML$Tag;)V", nullptr, $PUBLIC},
	{"setModel", "(Ljava/lang/String;Ljavax/swing/text/MutableAttributeSet;)V", nullptr, 0},
	{"start", "(Ljavax/swing/text/html/HTML$Tag;Ljavax/swing/text/MutableAttributeSet;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _HTMLDocument$HTMLReader$FormAction_InnerClassesInfo_[] = {
	{"javax.swing.text.html.HTMLDocument$HTMLReader", "javax.swing.text.html.HTMLDocument", "HTMLReader", $PUBLIC},
	{"javax.swing.text.html.HTMLDocument$HTMLReader$FormAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "FormAction", $PUBLIC},
	{"javax.swing.text.html.HTMLDocument$HTMLReader$SpecialAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "SpecialAction", $PUBLIC},
	{}
};

$ClassInfo _HTMLDocument$HTMLReader$FormAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.html.HTMLDocument$HTMLReader$FormAction",
	"javax.swing.text.html.HTMLDocument$HTMLReader$SpecialAction",
	nullptr,
	_HTMLDocument$HTMLReader$FormAction_FieldInfo_,
	_HTMLDocument$HTMLReader$FormAction_MethodInfo_,
	nullptr,
	nullptr,
	_HTMLDocument$HTMLReader$FormAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.HTMLDocument"
};

$Object* allocate$HTMLDocument$HTMLReader$FormAction($Class* clazz) {
	return $of($alloc(HTMLDocument$HTMLReader$FormAction));
}

void HTMLDocument$HTMLReader$FormAction::init$($HTMLDocument$HTMLReader* this$1) {
	$set(this, this$1, this$1);
	$HTMLDocument$HTMLReader$SpecialAction::init$(this$1);
}

void HTMLDocument$HTMLReader$FormAction::start($HTML$Tag* t, $MutableAttributeSet* attr) {
	$useLocalCurrentObjectStackCache();
	$init($HTML$Tag);
	if (t == $HTML$Tag::INPUT) {
		$init($HTML$Attribute);
		$var($String, type, $cast($String, $nc(attr)->getAttribute($HTML$Attribute::TYPE)));
		if (type == nullptr) {
			$assign(type, "text"_s);
			attr->addAttribute($HTML$Attribute::TYPE, "text"_s);
		}
		setModel(type, attr);
	} else {
		if (t == $HTML$Tag::TEXTAREA) {
			this->this$1->inTextArea = true;
			$set(this->this$1, textAreaDocument, $new($TextAreaDocument));
			$init($StyleConstants);
			$nc(attr)->addAttribute($StyleConstants::ModelAttribute, this->this$1->textAreaDocument);
		} else {
			if (t == $HTML$Tag::SELECT) {
				$init($HTML$Attribute);
				int32_t size = $HTML::getIntegerAttributeValue(attr, $HTML$Attribute::SIZE, 1);
				bool multiple = $nc(attr)->getAttribute($HTML$Attribute::MULTIPLE) != nullptr;
				if ((size > 1) || multiple) {
					$var($OptionListModel, m, $new($OptionListModel));
					if (multiple) {
						m->setSelectionMode($ListSelectionModel::MULTIPLE_INTERVAL_SELECTION);
					}
					$set(this, selectModel, m);
				} else {
					$set(this, selectModel, $new($OptionComboBoxModel));
				}
				$init($StyleConstants);
				attr->addAttribute($StyleConstants::ModelAttribute, this->selectModel);
			}
		}
	}
	if (t == $HTML$Tag::OPTION) {
		$set(this->this$1, option, $new($Option, attr));
		if ($instanceOf($OptionListModel, this->selectModel)) {
			$var($OptionListModel, m, $cast($OptionListModel, this->selectModel));
			$nc(m)->addElement(this->this$1->option);
			if ($nc(this->this$1->option)->isSelected()) {
				m->addSelectionInterval(this->optionCount, this->optionCount);
				m->setInitialSelection(this->optionCount);
			}
		} else if ($instanceOf($OptionComboBoxModel, this->selectModel)) {
			$var($OptionComboBoxModel, m, $cast($OptionComboBoxModel, this->selectModel));
			$nc(m)->addElement(this->this$1->option);
			if ($nc(this->this$1->option)->isSelected()) {
				m->setSelectedItem(this->this$1->option);
				m->setInitialSelection(this->this$1->option);
			}
		}
		++this->optionCount;
	} else {
		$HTMLDocument$HTMLReader$SpecialAction::start(t, attr);
	}
}

void HTMLDocument$HTMLReader$FormAction::end($HTML$Tag* t) {
	$init($HTML$Tag);
	if (t == $HTML$Tag::OPTION) {
		$set(this->this$1, option, nullptr);
	} else {
		if (t == $HTML$Tag::SELECT) {
			$set(this, selectModel, nullptr);
			this->optionCount = 0;
		} else {
			if (t == $HTML$Tag::TEXTAREA) {
				this->this$1->inTextArea = false;
				$nc(this->this$1->textAreaDocument)->storeInitialText();
			}
		}
		$HTMLDocument$HTMLReader$SpecialAction::end(t);
	}
}

void HTMLDocument$HTMLReader$FormAction::setModel($String* type, $MutableAttributeSet* attr) {
	$useLocalCurrentObjectStackCache();
	bool var$1 = $nc(type)->equals("submit"_s);
	bool var$0 = var$1 || $nc(type)->equals("reset"_s);
	if (var$0 || $nc(type)->equals("image"_s)) {
		$init($StyleConstants);
		$nc(attr)->addAttribute($StyleConstants::ModelAttribute, $$new($DefaultButtonModel));
	} else {
		bool var$3 = type->equals("text"_s);
		if (var$3 || type->equals("password"_s)) {
			$init($HTML$Attribute);
			int32_t maxLength = $HTML::getIntegerAttributeValue(attr, $HTML$Attribute::MAXLENGTH, -1);
			$var($Document, doc, nullptr);
			if (maxLength > 0) {
				$assign(doc, $new($HTMLDocument$FixedLengthDocument, maxLength));
			} else {
				$assign(doc, $new($PlainDocument));
			}
			$var($String, value, $cast($String, $nc(attr)->getAttribute($HTML$Attribute::VALUE)));
			try {
				$nc(doc)->insertString(0, value, nullptr);
			} catch ($BadLocationException& e) {
			}
			$init($StyleConstants);
			attr->addAttribute($StyleConstants::ModelAttribute, doc);
		} else if (type->equals("file"_s)) {
			$init($StyleConstants);
			$nc(attr)->addAttribute($StyleConstants::ModelAttribute, $$new($PlainDocument));
		} else {
			bool var$5 = type->equals("checkbox"_s);
			if (var$5 || type->equals("radio"_s)) {
				$var($JToggleButton$ToggleButtonModel, model, $new($JToggleButton$ToggleButtonModel));
				if (type->equals("radio"_s)) {
					$init($HTML$Attribute);
					$var($String, name, $cast($String, $nc(attr)->getAttribute($HTML$Attribute::NAME)));
					if ($nc(this->this$1->this$0)->radioButtonGroupsMap == nullptr) {
						$set($nc(this->this$1->this$0), radioButtonGroupsMap, $new($HashMap));
					}
					$var($ButtonGroup, radioButtonGroup, $cast($ButtonGroup, $nc($nc(this->this$1->this$0)->radioButtonGroupsMap)->get(name)));
					if (radioButtonGroup == nullptr) {
						$assign(radioButtonGroup, $new($ButtonGroup));
						$nc($nc(this->this$1->this$0)->radioButtonGroupsMap)->put(name, radioButtonGroup);
					}
					model->setGroup(radioButtonGroup);
				}
				$init($HTML$Attribute);
				bool checked = ($nc(attr)->getAttribute($HTML$Attribute::CHECKED) != nullptr);
				model->setSelected(checked);
				$init($StyleConstants);
				attr->addAttribute($StyleConstants::ModelAttribute, model);
			}
		}
	}
}

HTMLDocument$HTMLReader$FormAction::HTMLDocument$HTMLReader$FormAction() {
}

$Class* HTMLDocument$HTMLReader$FormAction::load$($String* name, bool initialize) {
	$loadClass(HTMLDocument$HTMLReader$FormAction, name, initialize, &_HTMLDocument$HTMLReader$FormAction_ClassInfo_, allocate$HTMLDocument$HTMLReader$FormAction);
	return class$;
}

$Class* HTMLDocument$HTMLReader$FormAction::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax