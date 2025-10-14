#include <TableFactory.h>

#include <CodeBugDocument.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/BoxView.h>
#include <javax/swing/text/ComponentView.h>
#include <javax/swing/text/CompositeView.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/FlowView.h>
#include <javax/swing/text/GlyphView.h>
#include <javax/swing/text/IconView.h>
#include <javax/swing/text/LabelView.h>
#include <javax/swing/text/ParagraphView.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/TableView.h>
#include <javax/swing/text/View.h>
#include <tableView.h>
#include <jcpp.h>

#undef ELEMENT_TABLE
#undef Y_AXIS

using $CodeBugDocument = ::CodeBugDocument;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $BoxView = ::javax::swing::text::BoxView;
using $ComponentView = ::javax::swing::text::ComponentView;
using $CompositeView = ::javax::swing::text::CompositeView;
using $Element = ::javax::swing::text::Element;
using $FlowView = ::javax::swing::text::FlowView;
using $GlyphView = ::javax::swing::text::GlyphView;
using $IconView = ::javax::swing::text::IconView;
using $LabelView = ::javax::swing::text::LabelView;
using $ParagraphView = ::javax::swing::text::ParagraphView;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $TableView = ::javax::swing::text::TableView;
using $View = ::javax::swing::text::View;
using $ViewFactory = ::javax::swing::text::ViewFactory;
using $tableView = ::tableView;

$MethodInfo _TableFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TableFactory::*)()>(&TableFactory::init$))},
	{"create", "(Ljavax/swing/text/Element;)Ljavax/swing/text/View;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TableFactory_ClassInfo_ = {
	$ACC_SUPER,
	"TableFactory",
	"java.lang.Object",
	"javax.swing.text.ViewFactory",
	nullptr,
	_TableFactory_MethodInfo_
};

$Object* allocate$TableFactory($Class* clazz) {
	return $of($alloc(TableFactory));
}

void TableFactory::init$() {
}

$View* TableFactory::create($Element* elem) {
	$var($String, kind, $nc(elem)->getName());
	if (kind != nullptr) {
		$init($AbstractDocument);
		if (kind->equals($AbstractDocument::ContentElementName)) {
			return $new($LabelView, elem);
		} else {
			if (kind->equals($AbstractDocument::ParagraphElementName)) {
				return $new($ParagraphView, elem);
			} else {
				if (kind->equals($AbstractDocument::SectionElementName)) {
					return $new($BoxView, elem, $View::Y_AXIS);
				} else {
					$init($StyleConstants);
					if (kind->equals($StyleConstants::ComponentElementName)) {
						return $new($ComponentView, elem);
					} else {
						$init($CodeBugDocument);
						if (kind->equals($CodeBugDocument::ELEMENT_TABLE)) {
							return $new($tableView, elem);
						} else {
							if (kind->equals($StyleConstants::IconElementName)) {
								return $new($IconView, elem);
							}
						}
					}
				}
			}
		}
	}
	return $new($LabelView, elem);
}

TableFactory::TableFactory() {
}

$Class* TableFactory::load$($String* name, bool initialize) {
	$loadClass(TableFactory, name, initialize, &_TableFactory_ClassInfo_, allocate$TableFactory);
	return class$;
}

$Class* TableFactory::class$ = nullptr;