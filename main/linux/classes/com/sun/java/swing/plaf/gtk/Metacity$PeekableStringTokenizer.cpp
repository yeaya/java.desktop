#include <com/sun/java/swing/plaf/gtk/Metacity$PeekableStringTokenizer.h>

#include <com/sun/java/swing/plaf/gtk/Metacity.h>
#include <java/util/StringTokenizer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringTokenizer = ::java::util::StringTokenizer;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

$FieldInfo _Metacity$PeekableStringTokenizer_FieldInfo_[] = {
	{"token", "Ljava/lang/String;", nullptr, 0, $field(Metacity$PeekableStringTokenizer, token)},
	{}
};

$MethodInfo _Metacity$PeekableStringTokenizer_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(static_cast<void(Metacity$PeekableStringTokenizer::*)($String*,$String*,bool)>(&Metacity$PeekableStringTokenizer::init$))},
	{"hasMoreTokens", "()Z", nullptr, $PUBLIC},
	{"nextToken", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"peek", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Metacity$PeekableStringTokenizer_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.Metacity$PeekableStringTokenizer", "com.sun.java.swing.plaf.gtk.Metacity", "PeekableStringTokenizer", $STATIC},
	{}
};

$ClassInfo _Metacity$PeekableStringTokenizer_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.gtk.Metacity$PeekableStringTokenizer",
	"java.util.StringTokenizer",
	nullptr,
	_Metacity$PeekableStringTokenizer_FieldInfo_,
	_Metacity$PeekableStringTokenizer_MethodInfo_,
	nullptr,
	nullptr,
	_Metacity$PeekableStringTokenizer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.Metacity"
};

$Object* allocate$Metacity$PeekableStringTokenizer($Class* clazz) {
	return $of($alloc(Metacity$PeekableStringTokenizer));
}

void Metacity$PeekableStringTokenizer::init$($String* str, $String* delim, bool returnDelims) {
	$StringTokenizer::init$(str, delim, returnDelims);
	$set(this, token, nullptr);
	peek();
}

$String* Metacity$PeekableStringTokenizer::peek() {
	if (this->token == nullptr) {
		$set(this, token, nextToken());
	}
	return this->token;
}

bool Metacity$PeekableStringTokenizer::hasMoreTokens() {
	return (this->token != nullptr || $StringTokenizer::hasMoreTokens());
}

$String* Metacity$PeekableStringTokenizer::nextToken() {
	$useLocalCurrentObjectStackCache();
	if (this->token != nullptr) {
		$var($String, t, this->token);
		$set(this, token, nullptr);
		if (hasMoreTokens()) {
			peek();
		}
		return t;
	} else {
		$var($String, token, $StringTokenizer::nextToken());
		while (true) {
			bool var$1 = $nc(token)->equals(" "_s);
			bool var$0 = (var$1 || $nc(token)->equals("\t"_s));
			if (!(var$0 && hasMoreTokens())) {
				break;
			}
			{
				$assign(token, $StringTokenizer::nextToken());
			}
		}
		return token;
	}
}

Metacity$PeekableStringTokenizer::Metacity$PeekableStringTokenizer() {
}

$Class* Metacity$PeekableStringTokenizer::load$($String* name, bool initialize) {
	$loadClass(Metacity$PeekableStringTokenizer, name, initialize, &_Metacity$PeekableStringTokenizer_ClassInfo_, allocate$Metacity$PeekableStringTokenizer);
	return class$;
}

$Class* Metacity$PeekableStringTokenizer::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com