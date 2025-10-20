#include <javax/swing/text/html/HTMLEditorKit$HTMLFactory.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/AttributeSet.h>
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
#include <javax/swing/text/View.h>
#include <javax/swing/text/html/BRView.h>
#include <javax/swing/text/html/BlockView.h>
#include <javax/swing/text/html/CSS$Attribute.h>
#include <javax/swing/text/html/CommentView.h>
#include <javax/swing/text/html/EditableView.h>
#include <javax/swing/text/html/FormView.h>
#include <javax/swing/text/html/FrameSetView.h>
#include <javax/swing/text/html/FrameView.h>
#include <javax/swing/text/html/HRuleView.h>
#include <javax/swing/text/html/HTML$Attribute.h>
#include <javax/swing/text/html/HTML$Tag.h>
#include <javax/swing/text/html/HTML$UnknownTag.h>
#include <javax/swing/text/html/HTMLEditorKit$HTMLFactory$1.h>
#include <javax/swing/text/html/HTMLEditorKit$HTMLFactory$BodyBlockView.h>
#include <javax/swing/text/html/HTMLEditorKit.h>
#include <javax/swing/text/html/HiddenTagView.h>
#include <javax/swing/text/html/ImageView.h>
#include <javax/swing/text/html/InlineView.h>
#include <javax/swing/text/html/IsindexView.h>
#include <javax/swing/text/html/LineView.h>
#include <javax/swing/text/html/ListView.h>
#include <javax/swing/text/html/NoFramesView.h>
#include <javax/swing/text/html/ObjectView.h>
#include <javax/swing/text/html/ParagraphView.h>
#include <javax/swing/text/html/TableView.h>
#include <jcpp.h>

#undef APPLET
#undef AREA
#undef BLOCKQUOTE
#undef BODY
#undef BR
#undef CENTER
#undef COLS
#undef COMMENT
#undef CONTENT
#undef DD
#undef DIR
#undef DIV
#undef DL
#undef DT
#undef FORM
#undef FRAME
#undef FRAMESET
#undef HEAD
#undef HR
#undef HTML
#undef IMG
#undef IMPLIED
#undef INPUT
#undef ISINDEX
#undef LI
#undef LINK
#undef MAP
#undef MENU
#undef META
#undef NOFRAMES
#undef OBJECT
#undef OL
#undef P
#undef PARAM
#undef PRE
#undef ROWS
#undef SCRIPT
#undef SELECT
#undef STYLE
#undef TABLE
#undef TEXTAREA
#undef TITLE
#undef UL
#undef WHITE_SPACE
#undef X_AXIS
#undef Y_AXIS

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BoxView = ::javax::swing::text::BoxView;
using $ComponentView = ::javax::swing::text::ComponentView;
using $CompositeView = ::javax::swing::text::CompositeView;
using $Element = ::javax::swing::text::Element;
using $FlowView = ::javax::swing::text::FlowView;
using $GlyphView = ::javax::swing::text::GlyphView;
using $IconView = ::javax::swing::text::IconView;
using $LabelView = ::javax::swing::text::LabelView;
using $1ParagraphView = ::javax::swing::text::ParagraphView;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $View = ::javax::swing::text::View;
using $ViewFactory = ::javax::swing::text::ViewFactory;
using $BRView = ::javax::swing::text::html::BRView;
using $BlockView = ::javax::swing::text::html::BlockView;
using $CSS$Attribute = ::javax::swing::text::html::CSS$Attribute;
using $CommentView = ::javax::swing::text::html::CommentView;
using $EditableView = ::javax::swing::text::html::EditableView;
using $FormView = ::javax::swing::text::html::FormView;
using $FrameSetView = ::javax::swing::text::html::FrameSetView;
using $FrameView = ::javax::swing::text::html::FrameView;
using $HRuleView = ::javax::swing::text::html::HRuleView;
using $HTML$Attribute = ::javax::swing::text::html::HTML$Attribute;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;
using $HTML$UnknownTag = ::javax::swing::text::html::HTML$UnknownTag;
using $HTMLEditorKit = ::javax::swing::text::html::HTMLEditorKit;
using $HTMLEditorKit$HTMLFactory$1 = ::javax::swing::text::html::HTMLEditorKit$HTMLFactory$1;
using $HTMLEditorKit$HTMLFactory$BodyBlockView = ::javax::swing::text::html::HTMLEditorKit$HTMLFactory$BodyBlockView;
using $HiddenTagView = ::javax::swing::text::html::HiddenTagView;
using $ImageView = ::javax::swing::text::html::ImageView;
using $InlineView = ::javax::swing::text::html::InlineView;
using $IsindexView = ::javax::swing::text::html::IsindexView;
using $LineView = ::javax::swing::text::html::LineView;
using $ListView = ::javax::swing::text::html::ListView;
using $NoFramesView = ::javax::swing::text::html::NoFramesView;
using $ObjectView = ::javax::swing::text::html::ObjectView;
using $ParagraphView = ::javax::swing::text::html::ParagraphView;
using $TableView = ::javax::swing::text::html::TableView;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$MethodInfo _HTMLEditorKit$HTMLFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HTMLEditorKit$HTMLFactory::*)()>(&HTMLEditorKit$HTMLFactory::init$))},
	{"create", "(Ljavax/swing/text/Element;)Ljavax/swing/text/View;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _HTMLEditorKit$HTMLFactory_InnerClassesInfo_[] = {
	{"javax.swing.text.html.HTMLEditorKit$HTMLFactory", "javax.swing.text.html.HTMLEditorKit", "HTMLFactory", $PUBLIC | $STATIC},
	{"javax.swing.text.html.HTMLEditorKit$HTMLFactory$BodyBlockView", "javax.swing.text.html.HTMLEditorKit$HTMLFactory", "BodyBlockView", $STATIC},
	{"javax.swing.text.html.HTMLEditorKit$HTMLFactory$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HTMLEditorKit$HTMLFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.html.HTMLEditorKit$HTMLFactory",
	"java.lang.Object",
	"javax.swing.text.ViewFactory",
	nullptr,
	_HTMLEditorKit$HTMLFactory_MethodInfo_,
	nullptr,
	nullptr,
	_HTMLEditorKit$HTMLFactory_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.HTMLEditorKit"
};

$Object* allocate$HTMLEditorKit$HTMLFactory($Class* clazz) {
	return $of($alloc(HTMLEditorKit$HTMLFactory));
}

void HTMLEditorKit$HTMLFactory::init$() {
}

$View* HTMLEditorKit$HTMLFactory::create($Element* elem) {
	$useLocalCurrentObjectStackCache();
	$var($AttributeSet, attrs, $nc(elem)->getAttributes());
	$init($AbstractDocument);
	$var($Object, elementName, $nc(attrs)->getAttribute($AbstractDocument::ElementNameAttribute));
	$init($StyleConstants);
	$var($Object, o, (elementName != nullptr) ? ($Object*)nullptr : attrs->getAttribute($StyleConstants::NameAttribute));
	if ($instanceOf($HTML$Tag, o)) {
		$var($HTML$Tag, kind, $cast($HTML$Tag, o));
		$init($HTML$Tag);
		if (kind == $HTML$Tag::CONTENT) {
			return $new($InlineView, elem);
		} else {
			if (kind == $HTML$Tag::IMPLIED) {
				$init($CSS$Attribute);
				$var($String, ws, $cast($String, $nc($(elem->getAttributes()))->getAttribute($CSS$Attribute::WHITE_SPACE)));
				if ((ws != nullptr) && ws->equals("pre"_s)) {
					return $new($LineView, elem);
				}
				return $new($ParagraphView, elem);
			} else {
				if ((kind == $HTML$Tag::P) || (kind == $HTML$Tag::H1) || (kind == $HTML$Tag::H2) || (kind == $HTML$Tag::H3) || (kind == $HTML$Tag::H4) || (kind == $HTML$Tag::H5) || (kind == $HTML$Tag::H6) || (kind == $HTML$Tag::DT)) {
					return $new($ParagraphView, elem);
				} else {
					if ((kind == $HTML$Tag::MENU) || (kind == $HTML$Tag::DIR) || (kind == $HTML$Tag::UL) || (kind == $HTML$Tag::OL)) {
						return $new($ListView, elem);
					} else {
						if (kind == $HTML$Tag::BODY) {
							return $new($HTMLEditorKit$HTMLFactory$BodyBlockView, elem);
						} else {
							if (kind == $HTML$Tag::HTML) {
								return $new($BlockView, elem, $View::Y_AXIS);
							} else {
								if ((kind == $HTML$Tag::LI) || (kind == $HTML$Tag::CENTER) || (kind == $HTML$Tag::DL) || (kind == $HTML$Tag::DD) || (kind == $HTML$Tag::DIV) || (kind == $HTML$Tag::BLOCKQUOTE) || (kind == $HTML$Tag::PRE) || (kind == $HTML$Tag::FORM)) {
									return $new($BlockView, elem, $View::Y_AXIS);
								} else {
									if (kind == $HTML$Tag::NOFRAMES) {
										return $new($NoFramesView, elem, $View::Y_AXIS);
									} else {
										if (kind == $HTML$Tag::IMG) {
											return $new($ImageView, elem);
										} else {
											if (kind == $HTML$Tag::ISINDEX) {
												return $new($IsindexView, elem);
											} else {
												if (kind == $HTML$Tag::HR) {
													return $new($HRuleView, elem);
												} else {
													if (kind == $HTML$Tag::BR) {
														return $new($BRView, elem);
													} else {
														if (kind == $HTML$Tag::TABLE) {
															return $new($TableView, elem);
														} else {
															if ((kind == $HTML$Tag::INPUT) || (kind == $HTML$Tag::SELECT) || (kind == $HTML$Tag::TEXTAREA)) {
																return $new($FormView, elem);
															} else {
																if (kind == $HTML$Tag::OBJECT) {
																	return $new($ObjectView, elem);
																} else {
																	if (kind == $HTML$Tag::FRAMESET) {
																		$init($HTML$Attribute);
																		if ($nc($(elem->getAttributes()))->isDefined($HTML$Attribute::ROWS)) {
																			return $new($FrameSetView, elem, $View::Y_AXIS);
																		} else {
																			if ($nc($(elem->getAttributes()))->isDefined($HTML$Attribute::COLS)) {
																				return $new($FrameSetView, elem, $View::X_AXIS);
																			}
																		}
																		$throwNew($RuntimeException, $$str({"Can\'t build a"_s, kind, ", "_s, elem, ":no ROWS or COLS defined."_s}));
																	} else {
																		if (kind == $HTML$Tag::FRAME) {
																			return $new($FrameView, elem);
																		} else if ($instanceOf($HTML$UnknownTag, kind)) {
																			return $new($HiddenTagView, elem);
																		} else {
																			if (kind == $HTML$Tag::COMMENT) {
																				return $new($CommentView, elem);
																			} else {
																				if (kind == $HTML$Tag::HEAD) {
																					return $new($HTMLEditorKit$HTMLFactory$1, this, elem, $View::X_AXIS);
																				} else {
																					if ((kind == $HTML$Tag::TITLE) || (kind == $HTML$Tag::META) || (kind == $HTML$Tag::LINK) || (kind == $HTML$Tag::STYLE) || (kind == $HTML$Tag::SCRIPT) || (kind == $HTML$Tag::AREA) || (kind == $HTML$Tag::MAP) || (kind == $HTML$Tag::PARAM) || (kind == $HTML$Tag::APPLET)) {
																						return $new($HiddenTagView, elem);
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	$var($String, nm, (elementName != nullptr) ? $cast($String, elementName) : elem->getName());
	if (nm != nullptr) {
		if (nm->equals($AbstractDocument::ContentElementName)) {
			return $new($LabelView, elem);
		} else {
			if (nm->equals($AbstractDocument::ParagraphElementName)) {
				return $new($ParagraphView, elem);
			} else {
				if (nm->equals($AbstractDocument::SectionElementName)) {
					return $new($BoxView, elem, $View::Y_AXIS);
				} else {
					if (nm->equals($StyleConstants::ComponentElementName)) {
						return $new($ComponentView, elem);
					} else {
						if (nm->equals($StyleConstants::IconElementName)) {
							return $new($IconView, elem);
						}
					}
				}
			}
		}
	}
	return $new($LabelView, elem);
}

HTMLEditorKit$HTMLFactory::HTMLEditorKit$HTMLFactory() {
}

$Class* HTMLEditorKit$HTMLFactory::load$($String* name, bool initialize) {
	$loadClass(HTMLEditorKit$HTMLFactory, name, initialize, &_HTMLEditorKit$HTMLFactory_ClassInfo_, allocate$HTMLEditorKit$HTMLFactory);
	return class$;
}

$Class* HTMLEditorKit$HTMLFactory::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax