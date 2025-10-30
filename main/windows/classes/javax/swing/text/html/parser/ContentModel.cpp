#include <javax/swing/text/html/parser/ContentModel.h>

#include <java/util/Vector.h>
#include <javax/swing/text/html/parser/Element.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $Element = ::javax::swing::text::html::parser::Element;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				namespace parser {

$FieldInfo _ContentModel_FieldInfo_[] = {
	{"type", "I", nullptr, $PUBLIC, $field(ContentModel, type)},
	{"content", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ContentModel, content)},
	{"next", "Ljavax/swing/text/html/parser/ContentModel;", nullptr, $PUBLIC, $field(ContentModel, next)},
	{"valSet", "[Z", nullptr, $PRIVATE, $field(ContentModel, valSet)},
	{"val", "[Z", nullptr, $PRIVATE, $field(ContentModel, val)},
	{}
};

$MethodInfo _ContentModel_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ContentModel::*)()>(&ContentModel::init$))},
	{"<init>", "(Ljavax/swing/text/html/parser/Element;)V", nullptr, $PUBLIC, $method(static_cast<void(ContentModel::*)($Element*)>(&ContentModel::init$))},
	{"<init>", "(ILjavax/swing/text/html/parser/ContentModel;)V", nullptr, $PUBLIC, $method(static_cast<void(ContentModel::*)(int32_t,ContentModel*)>(&ContentModel::init$))},
	{"<init>", "(ILjava/lang/Object;Ljavax/swing/text/html/parser/ContentModel;)V", nullptr, $PUBLIC, $method(static_cast<void(ContentModel::*)(int32_t,Object$*,ContentModel*)>(&ContentModel::init$))},
	{"empty", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(ContentModel::*)()>(&ContentModel::empty))},
	{"first", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $method(static_cast<bool(ContentModel::*)(Object$*)>(&ContentModel::first))},
	{"first", "()Ljavax/swing/text/html/parser/Element;", nullptr, $PUBLIC, $method(static_cast<$Element*(ContentModel::*)()>(&ContentModel::first))},
	{"getElements", "(Ljava/util/Vector;)V", "(Ljava/util/Vector<Ljavax/swing/text/html/parser/Element;>;)V", $PUBLIC, $method(static_cast<void(ContentModel::*)($Vector*)>(&ContentModel::getElements))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ContentModel_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.swing.text.html.parser.ContentModel",
	"java.lang.Object",
	"java.io.Serializable",
	_ContentModel_FieldInfo_,
	_ContentModel_MethodInfo_
};

$Object* allocate$ContentModel($Class* clazz) {
	return $of($alloc(ContentModel));
}

void ContentModel::init$() {
}

void ContentModel::init$($Element* content) {
	ContentModel::init$(0, content, nullptr);
}

void ContentModel::init$(int32_t type, ContentModel* content) {
	ContentModel::init$(type, content, nullptr);
}

void ContentModel::init$(int32_t type, Object$* content, ContentModel* next) {
	this->type = type;
	$set(this, content, content);
	$set(this, next, next);
}

bool ContentModel::empty() {
	$useLocalCurrentObjectStackCache();
	switch (this->type) {
	case u'*':
		{}
	case u'?':
		{
			return true;
		}
	case u'+':
		{}
	case u'|':
		{
			{
				$var(ContentModel, m, $cast(ContentModel, this->content));
				for (; m != nullptr; $assign(m, $nc(m)->next)) {
					if (m->empty()) {
						return true;
					}
				}
			}
			return false;
		}
	case u',':
		{}
	case u'&':
		{
			{
				$var(ContentModel, m, $cast(ContentModel, this->content));
				for (; m != nullptr; $assign(m, $nc(m)->next)) {
					if (!m->empty()) {
						return false;
					}
				}
			}
			return true;
		}
	default:
		{
			return false;
		}
	}
}

void ContentModel::getElements($Vector* elemVec) {
	switch (this->type) {
	case u'*':
		{}
	case u'?':
		{}
	case u'+':
		{
			$nc(($cast(ContentModel, this->content)))->getElements(elemVec);
			break;
		}
	case u',':
		{}
	case u'|':
		{}
	case u'&':
		{
			{
				$var(ContentModel, m, $cast(ContentModel, this->content));
				for (; m != nullptr; $assign(m, $nc(m)->next)) {
					m->getElements(elemVec);
				}
			}
			break;
		}
	default:
		{
			$nc(elemVec)->addElement($cast($Element, this->content));
		}
	}
}

bool ContentModel::first(Object$* token) {
	$useLocalCurrentObjectStackCache();
	switch (this->type) {
	case u'*':
		{}
	case u'?':
		{}
	case u'+':
		{
			return $nc(($cast(ContentModel, this->content)))->first(token);
		}
	case u',':
		{
			{
				$var(ContentModel, m, $cast(ContentModel, this->content));
				for (; m != nullptr; $assign(m, $nc(m)->next)) {
					if (m->first(token)) {
						return true;
					}
					if (!m->empty()) {
						return false;
					}
				}
			}
			return false;
		}
	case u'|':
		{}
	case u'&':
		{
			{
				$var($Element, e, $cast($Element, token));
				if (this->valSet == nullptr || $nc(this->valSet)->length <= $Element::getMaxIndex()) {
					$set(this, valSet, $new($booleans, $Element::getMaxIndex() + 1));
					$set(this, val, $new($booleans, $nc(this->valSet)->length));
				}
				if ($nc(this->valSet)->get($nc(e)->index)) {
					return $nc(this->val)->get(e->index);
				}
				{
					$var(ContentModel, m, $cast(ContentModel, this->content));
					for (; m != nullptr; $assign(m, $nc(m)->next)) {
						if (m->first(token)) {
							$nc(this->val)->set($nc(e)->index, true);
							break;
						}
					}
				}
				$nc(this->valSet)->set($nc(e)->index, true);
				return $nc(this->val)->get(e->index);
			}
		}
	default:
		{
			return ($equals(this->content, token));
		}
	}
}

$Element* ContentModel::first() {
	switch (this->type) {
	case u'&':
		{}
	case u'|':
		{}
	case u'*':
		{}
	case u'?':
		{
			return nullptr;
		}
	case u'+':
		{}
	case u',':
		{
			return $nc(($cast(ContentModel, this->content)))->first();
		}
	default:
		{
			return $cast($Element, this->content);
		}
	}
}

$String* ContentModel::toString() {
	$useLocalCurrentObjectStackCache();
	{
		$var($chars, data, nullptr)
		$var($String, str, nullptr)
		switch (this->type) {
		case u'*':
			{
				return $str({this->content, "*"_s});
			}
		case u'?':
			{
				return $str({this->content, "?"_s});
			}
		case u'+':
			{
				return $str({this->content, "+"_s});
			}
		case u',':
			{}
		case u'|':
			{}
		case u'&':
			{
				$assign(data, $new($chars, {
					u' ',
					(char16_t)this->type,
					u' '
				}));
				$assign(str, ""_s);
				{
					$var(ContentModel, m, $cast(ContentModel, this->content));
					for (; m != nullptr; $assign(m, $nc(m)->next)) {
						$assign(str, $str({str, m}));
						if (m->next != nullptr) {
							$plusAssign(str, $$new($String, data));
						}
					}
				}
				return $str({"("_s, str, ")"_s});
			}
		default:
			{
				return $nc($of(this->content))->toString();
			}
		}
	}
}

ContentModel::ContentModel() {
}

$Class* ContentModel::load$($String* name, bool initialize) {
	$loadClass(ContentModel, name, initialize, &_ContentModel_ClassInfo_, allocate$ContentModel);
	return class$;
}

$Class* ContentModel::class$ = nullptr;

				} // parser
			} // html
		} // text
	} // swing
} // javax