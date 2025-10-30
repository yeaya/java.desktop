#include <javax/swing/text/html/parser/ContentModelState.h>

#include <javax/swing/text/html/parser/ContentModel.h>
#include <javax/swing/text/html/parser/Element.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ContentModel = ::javax::swing::text::html::parser::ContentModel;
using $Element = ::javax::swing::text::html::parser::Element;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				namespace parser {

$FieldInfo _ContentModelState_FieldInfo_[] = {
	{"model", "Ljavax/swing/text/html/parser/ContentModel;", nullptr, 0, $field(ContentModelState, model)},
	{"value", "J", nullptr, 0, $field(ContentModelState, value)},
	{"next", "Ljavax/swing/text/html/parser/ContentModelState;", nullptr, 0, $field(ContentModelState, next)},
	{}
};

$MethodInfo _ContentModelState_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/html/parser/ContentModel;)V", nullptr, $PUBLIC, $method(static_cast<void(ContentModelState::*)($ContentModel*)>(&ContentModelState::init$))},
	{"<init>", "(Ljava/lang/Object;Ljavax/swing/text/html/parser/ContentModelState;)V", nullptr, 0, $method(static_cast<void(ContentModelState::*)(Object$*,ContentModelState*)>(&ContentModelState::init$))},
	{"<init>", "(Ljava/lang/Object;Ljavax/swing/text/html/parser/ContentModelState;J)V", nullptr, 0, $method(static_cast<void(ContentModelState::*)(Object$*,ContentModelState*,int64_t)>(&ContentModelState::init$))},
	{"advance", "(Ljava/lang/Object;)Ljavax/swing/text/html/parser/ContentModelState;", nullptr, $PUBLIC},
	{"first", "()Ljavax/swing/text/html/parser/Element;", nullptr, $PUBLIC},
	{"getModel", "()Ljavax/swing/text/html/parser/ContentModel;", nullptr, $PUBLIC},
	{"terminate", "()Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ContentModelState_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.parser.ContentModelState",
	"java.lang.Object",
	nullptr,
	_ContentModelState_FieldInfo_,
	_ContentModelState_MethodInfo_
};

$Object* allocate$ContentModelState($Class* clazz) {
	return $of($alloc(ContentModelState));
}

void ContentModelState::init$($ContentModel* model) {
	ContentModelState::init$(model, nullptr, 0);
}

void ContentModelState::init$(Object$* content, ContentModelState* next) {
	ContentModelState::init$(content, next, 0);
}

void ContentModelState::init$(Object$* content, ContentModelState* next, int64_t value) {
	$set(this, model, $cast($ContentModel, content));
	$set(this, next, next);
	this->value = value;
}

$ContentModel* ContentModelState::getModel() {
	$var($ContentModel, m, this->model);
	for (int32_t i = 0; i < this->value; ++i) {
		if ($nc(m)->next != nullptr) {
			$assign(m, m->next);
		} else {
			return nullptr;
		}
	}
	return m;
}

bool ContentModelState::terminate() {
	$useLocalCurrentObjectStackCache();
	switch ($nc(this->model)->type) {
	case u'+':
		{
			if ((this->value == 0) && !$nc((this->model))->empty()) {
				return false;
			}
		}
	case u'*':
		{}
	case u'?':
		{
			return (this->next == nullptr) || $nc(this->next)->terminate();
		}
	case u'|':
		{
			{
				$var($ContentModel, m, $cast($ContentModel, $nc(this->model)->content));
				for (; m != nullptr; $assign(m, $nc(m)->next)) {
					if (m->empty()) {
						return (this->next == nullptr) || $nc(this->next)->terminate();
					}
				}
			}
			return false;
		}
	case u'&':
		{
			{
				$var($ContentModel, m, $cast($ContentModel, $nc(this->model)->content));
				for (int32_t i = 0; m != nullptr; ++i, $assign(m, $nc(m)->next)) {
					if (((int64_t)(this->value & (uint64_t)($sl((int64_t)1, i)))) == 0) {
						if (!m->empty()) {
							return false;
						}
					}
				}
				return (this->next == nullptr) || $nc(this->next)->terminate();
			}
		}
	case u',':
		{
			{
				$var($ContentModel, m, $cast($ContentModel, $nc(this->model)->content));
				for (int32_t i = 0; i < this->value; ++i, $assign(m, $nc(m)->next)) {
				}
				for (; (m != nullptr) && m->empty(); $assign(m, m->next)) {
				}
				if (m != nullptr) {
					return false;
				}
				return (this->next == nullptr) || $nc(this->next)->terminate();
			}
		}
	default:
		{
			return false;
		}
	}
}

$Element* ContentModelState::first() {
	switch ($nc(this->model)->type) {
	case u'*':
		{}
	case u'?':
		{}
	case u'|':
		{}
	case u'&':
		{
			return nullptr;
		}
	case u'+':
		{
			return $nc(this->model)->first();
		}
	case u',':
		{
			{
				$var($ContentModel, m, $cast($ContentModel, $nc(this->model)->content));
				for (int32_t i = 0; i < this->value; ++i, $assign(m, $nc(m)->next)) {
				}
				return m->first();
			}
		}
	default:
		{
			return $nc(this->model)->first();
		}
	}
}

ContentModelState* ContentModelState::advance(Object$* token) {
	$useLocalCurrentObjectStackCache();
	switch ($nc(this->model)->type) {
	case u'+':
		{
			if ($nc(this->model)->first(token)) {
				return $$new(ContentModelState, $nc(this->model)->content, $$new(ContentModelState, this->model, this->next, this->value + 1))->advance(token);
			}
			if (this->value != 0) {
				if (this->next != nullptr) {
					return $nc(this->next)->advance(token);
				} else {
					return nullptr;
				}
			}
			break;
		}
	case u'*':
		{
			if ($nc(this->model)->first(token)) {
				return $$new(ContentModelState, $nc(this->model)->content, this)->advance(token);
			}
			if (this->next != nullptr) {
				return $nc(this->next)->advance(token);
			} else {
				return nullptr;
			}
		}
	case u'?':
		{
			if ($nc(this->model)->first(token)) {
				return $$new(ContentModelState, $nc(this->model)->content, this->next)->advance(token);
			}
			if (this->next != nullptr) {
				return $nc(this->next)->advance(token);
			} else {
				return nullptr;
			}
		}
	case u'|':
		{
			{
				$var($ContentModel, m, $cast($ContentModel, $nc(this->model)->content));
				for (; m != nullptr; $assign(m, $nc(m)->next)) {
					if (m->first(token)) {
						return $$new(ContentModelState, m, this->next)->advance(token);
					}
				}
			}
			break;
		}
	case u',':
		{
			{
				$var($ContentModel, m, $cast($ContentModel, $nc(this->model)->content));
				for (int32_t i = 0; i < this->value; ++i, $assign(m, $nc(m)->next)) {
				}
				bool var$0 = m->first(token);
				if (var$0 || m->empty()) {
					if (m->next == nullptr) {
						return $$new(ContentModelState, m, this->next)->advance(token);
					} else {
						return $$new(ContentModelState, m, $$new(ContentModelState, this->model, this->next, this->value + 1))->advance(token);
					}
				}
				break;
			}
		}
	case u'&':
		{
			{
				$var($ContentModel, m, $cast($ContentModel, $nc(this->model)->content));
				bool complete = true;
				for (int32_t i = 0; m != nullptr; ++i, $assign(m, $nc(m)->next)) {
					if (((int64_t)(this->value & (uint64_t)($sl((int64_t)1, i)))) == 0) {
						if (m->first(token)) {
							return $$new(ContentModelState, m, $$new(ContentModelState, this->model, this->next, this->value | ($sl((int64_t)1, i))))->advance(token);
						}
						if (!m->empty()) {
							complete = false;
						}
					}
				}
				if (complete) {
					if (this->next != nullptr) {
						return $nc(this->next)->advance(token);
					} else {
						return nullptr;
					}
				}
				break;
			}
		}
	default:
		{
			if ($equals($nc(this->model)->content, token)) {
				if (this->next == nullptr && ($instanceOf($Element, token)) && $nc(($cast($Element, token)))->content != nullptr) {
					return $new(ContentModelState, ($cast($Element, token))->content);
				}
				return this->next;
			}
		}
	}
	return nullptr;
}

ContentModelState::ContentModelState() {
}

$Class* ContentModelState::load$($String* name, bool initialize) {
	$loadClass(ContentModelState, name, initialize, &_ContentModelState_ClassInfo_, allocate$ContentModelState);
	return class$;
}

$Class* ContentModelState::class$ = nullptr;

				} // parser
			} // html
		} // text
	} // swing
} // javax