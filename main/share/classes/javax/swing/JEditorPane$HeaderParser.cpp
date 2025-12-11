#include <javax/swing/JEditorPane$HeaderParser.h>

#include <javax/swing/JEditorPane.h>
#include <jcpp.h>

using $StringArray2 = $Array<::java::lang::String, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {

$FieldInfo _JEditorPane$HeaderParser_FieldInfo_[] = {
	{"raw", "Ljava/lang/String;", nullptr, 0, $field(JEditorPane$HeaderParser, raw)},
	{"tab", "[[Ljava/lang/String;", nullptr, 0, $field(JEditorPane$HeaderParser, tab)},
	{}
};

$MethodInfo _JEditorPane$HeaderParser_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(JEditorPane$HeaderParser::*)($String*)>(&JEditorPane$HeaderParser::init$))},
	{"findInt", "(Ljava/lang/String;I)I", nullptr, $PUBLIC},
	{"findKey", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"findValue", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"findValue", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"findValue", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"parse", "()V", nullptr, $PRIVATE, $method(static_cast<void(JEditorPane$HeaderParser::*)()>(&JEditorPane$HeaderParser::parse))},
	{}
};

$InnerClassInfo _JEditorPane$HeaderParser_InnerClassesInfo_[] = {
	{"javax.swing.JEditorPane$HeaderParser", "javax.swing.JEditorPane", "HeaderParser", $STATIC},
	{}
};

$ClassInfo _JEditorPane$HeaderParser_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JEditorPane$HeaderParser",
	"java.lang.Object",
	nullptr,
	_JEditorPane$HeaderParser_FieldInfo_,
	_JEditorPane$HeaderParser_MethodInfo_,
	nullptr,
	nullptr,
	_JEditorPane$HeaderParser_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JEditorPane"
};

$Object* allocate$JEditorPane$HeaderParser($Class* clazz) {
	return $of($alloc(JEditorPane$HeaderParser));
}

void JEditorPane$HeaderParser::init$($String* raw) {
	$set(this, raw, raw);
	$set(this, tab, $new($StringArray2, 10, 2));
	parse();
}

void JEditorPane$HeaderParser::parse() {
	$useLocalCurrentObjectStackCache();
	if (this->raw != nullptr) {
		$set(this, raw, $nc(this->raw)->trim());
		$var($chars, ca, $nc(this->raw)->toCharArray());
		int32_t beg = 0;
		int32_t end = 0;
		int32_t i = 0;
		bool inKey = true;
		bool inQuote = false;
		int32_t len = ca->length;
		while (end < len) {
			char16_t c = ca->get(end);
			if (c == u'=') {
				$nc($nc(this->tab)->get(i))->set(0, $($$new($String, ca, beg, end - beg)->toLowerCase()));
				inKey = false;
				++end;
				beg = end;
			} else if (c == u'\"') {
				if (inQuote) {
					$nc($nc(this->tab)->get(i++))->set(1, $$new($String, ca, beg, end - beg));
					inQuote = false;
					do {
						++end;
					} while (end < len && (ca->get(end) == u' ' || ca->get(end) == u','));
					inKey = true;
					beg = end;
				} else {
					inQuote = true;
					++end;
					beg = end;
				}
			} else if (c == u' ' || c == u',') {
				if (inQuote) {
					++end;
					continue;
				} else if (inKey) {
					$nc($nc(this->tab)->get(i++))->set(0, $(($$new($String, ca, beg, end - beg))->toLowerCase()));
				} else {
					$nc($nc(this->tab)->get(i++))->set(1, ($$new($String, ca, beg, end - beg)));
				}
				while (end < len && (ca->get(end) == u' ' || ca->get(end) == u',')) {
					++end;
				}
				inKey = true;
				beg = end;
			} else {
				++end;
			}
		}
		if (--end > beg) {
			if (!inKey) {
				if (ca->get(end) == u'\"') {
					$nc($nc(this->tab)->get(i++))->set(1, ($$new($String, ca, beg, end - beg)));
				} else {
					$nc($nc(this->tab)->get(i++))->set(1, ($$new($String, ca, beg, end - beg + 1)));
				}
			} else {
				$nc($nc(this->tab)->get(i))->set(0, $(($$new($String, ca, beg, end - beg + 1))->toLowerCase()));
			}
		} else if (end == beg) {
			if (!inKey) {
				if (ca->get(end) == u'\"') {
					$nc($nc(this->tab)->get(i++))->set(1, $($String::valueOf(ca->get(end - 1))));
				} else {
					$nc($nc(this->tab)->get(i++))->set(1, $($String::valueOf(ca->get(end))));
				}
			} else {
				$nc($nc(this->tab)->get(i))->set(0, $($($String::valueOf(ca->get(end)))->toLowerCase()));
			}
		}
	}
}

$String* JEditorPane$HeaderParser::findKey(int32_t i) {
	if (i < 0 || i > 10) {
		return nullptr;
	}
	return $nc($nc(this->tab)->get(i))->get(0);
}

$String* JEditorPane$HeaderParser::findValue(int32_t i) {
	if (i < 0 || i > 10) {
		return nullptr;
	}
	return $nc($nc(this->tab)->get(i))->get(1);
}

$String* JEditorPane$HeaderParser::findValue($String* key) {
	return findValue(key, nullptr);
}

$String* JEditorPane$HeaderParser::findValue($String* k$renamed, $String* Default) {
	$var($String, k, k$renamed);
	if (k == nullptr) {
		return Default;
	}
	$assign(k, $nc(k)->toLowerCase());
	for (int32_t i = 0; i < 10; ++i) {
		if ($nc($nc(this->tab)->get(i))->get(0) == nullptr) {
			return Default;
		} else if (k->equals($nc($nc(this->tab)->get(i))->get(0))) {
			return $nc($nc(this->tab)->get(i))->get(1);
		}
	}
	return Default;
}

int32_t JEditorPane$HeaderParser::findInt($String* k, int32_t Default) {
	$useLocalCurrentObjectStackCache();
	try {
		return $Integer::parseInt($(findValue(k, $($String::valueOf(Default)))));
	} catch ($Throwable& t) {
		return Default;
	}
	$shouldNotReachHere();
}

JEditorPane$HeaderParser::JEditorPane$HeaderParser() {
}

$Class* JEditorPane$HeaderParser::load$($String* name, bool initialize) {
	$loadClass(JEditorPane$HeaderParser, name, initialize, &_JEditorPane$HeaderParser_ClassInfo_, allocate$JEditorPane$HeaderParser);
	return class$;
}

$Class* JEditorPane$HeaderParser::class$ = nullptr;

	} // swing
} // javax