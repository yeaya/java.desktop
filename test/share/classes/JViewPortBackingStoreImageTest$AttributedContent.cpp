#include <JViewPortBackingStoreImageTest$AttributedContent.h>

#include <JViewPortBackingStoreImageTest.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _JViewPortBackingStoreImageTest$AttributedContent_FieldInfo_[] = {
	{"attr", "Ljava/lang/String;", nullptr, 0, $field(JViewPortBackingStoreImageTest$AttributedContent, attr)},
	{"content", "Ljava/lang/String;", nullptr, 0, $field(JViewPortBackingStoreImageTest$AttributedContent, content)},
	{}
};

$MethodInfo _JViewPortBackingStoreImageTest$AttributedContent_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(JViewPortBackingStoreImageTest$AttributedContent::*)($String*,$String*)>(&JViewPortBackingStoreImageTest$AttributedContent::init$))},
	{}
};

$InnerClassInfo _JViewPortBackingStoreImageTest$AttributedContent_InnerClassesInfo_[] = {
	{"JViewPortBackingStoreImageTest$AttributedContent", "JViewPortBackingStoreImageTest", "AttributedContent", $STATIC},
	{}
};

$ClassInfo _JViewPortBackingStoreImageTest$AttributedContent_ClassInfo_ = {
	$ACC_SUPER,
	"JViewPortBackingStoreImageTest$AttributedContent",
	"java.lang.Object",
	nullptr,
	_JViewPortBackingStoreImageTest$AttributedContent_FieldInfo_,
	_JViewPortBackingStoreImageTest$AttributedContent_MethodInfo_,
	nullptr,
	nullptr,
	_JViewPortBackingStoreImageTest$AttributedContent_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"JViewPortBackingStoreImageTest"
};

$Object* allocate$JViewPortBackingStoreImageTest$AttributedContent($Class* clazz) {
	return $of($alloc(JViewPortBackingStoreImageTest$AttributedContent));
}

void JViewPortBackingStoreImageTest$AttributedContent::init$($String* attr, $String* content) {
	$set(this, attr, attr);
	$set(this, content, content);
}

JViewPortBackingStoreImageTest$AttributedContent::JViewPortBackingStoreImageTest$AttributedContent() {
}

$Class* JViewPortBackingStoreImageTest$AttributedContent::load$($String* name, bool initialize) {
	$loadClass(JViewPortBackingStoreImageTest$AttributedContent, name, initialize, &_JViewPortBackingStoreImageTest$AttributedContent_ClassInfo_, allocate$JViewPortBackingStoreImageTest$AttributedContent);
	return class$;
}

$Class* JViewPortBackingStoreImageTest$AttributedContent::class$ = nullptr;