#include <javax/swing/plaf/synth/DefaultSynthStyleFactory.h>

#include <java/awt/Component.h>
#include <java/awt/Font.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/HashMap.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/FontUIResource.h>
#include <javax/swing/plaf/synth/Region.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <javax/swing/plaf/synth/SynthStyleFactory.h>
#include <sun/swing/BakedArrayList.h>
#include <sun/swing/plaf/synth/DefaultSynthStyle.h>
#include <sun/swing/plaf/synth/StyleAssociation.h>
#include <jcpp.h>

#undef DIALOG
#undef NAME
#undef PLAIN
#undef REGION

using $Component = ::java::awt::Component;
using $Font = ::java::awt::Font;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $HashMap = ::java::util::HashMap;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $JComponent = ::javax::swing::JComponent;
using $FontUIResource = ::javax::swing::plaf::FontUIResource;
using $Region = ::javax::swing::plaf::synth::Region;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;
using $SynthStyleFactory = ::javax::swing::plaf::synth::SynthStyleFactory;
using $BakedArrayList = ::sun::swing::BakedArrayList;
using $DefaultSynthStyle = ::sun::swing::plaf::synth::DefaultSynthStyle;
using $StyleAssociation = ::sun::swing::plaf::synth::StyleAssociation;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _DefaultSynthStyleFactory_FieldInfo_[] = {
	{"NAME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DefaultSynthStyleFactory, NAME)},
	{"REGION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DefaultSynthStyleFactory, REGION)},
	{"_styles", "Ljava/util/List;", "Ljava/util/List<Lsun/swing/plaf/synth/StyleAssociation;>;", $PRIVATE, $field(DefaultSynthStyleFactory, _styles)},
	{"_tmpList", "Lsun/swing/BakedArrayList;", "Lsun/swing/BakedArrayList<Ljavax/swing/plaf/synth/SynthStyle;>;", $PRIVATE, $field(DefaultSynthStyleFactory, _tmpList)},
	{"_resolvedStyles", "Ljava/util/Map;", "Ljava/util/Map<Lsun/swing/BakedArrayList<Ljavax/swing/plaf/synth/SynthStyle;>;Ljavax/swing/plaf/synth/SynthStyle;>;", $PRIVATE, $field(DefaultSynthStyleFactory, _resolvedStyles)},
	{"_defaultStyle", "Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PRIVATE, $field(DefaultSynthStyleFactory, _defaultStyle)},
	{}
};

$MethodInfo _DefaultSynthStyleFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(DefaultSynthStyleFactory::*)()>(&DefaultSynthStyleFactory::init$))},
	{"addStyle", "(Lsun/swing/plaf/synth/DefaultSynthStyle;Ljava/lang/String;I)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.util.regex.PatternSyntaxException"},
	{"cacheStyle", "(Ljava/util/List;Ljavax/swing/plaf/synth/SynthStyle;)V", "(Ljava/util/List<Ljavax/swing/plaf/synth/SynthStyle;>;Ljavax/swing/plaf/synth/SynthStyle;)V", $PRIVATE, $method(static_cast<void(DefaultSynthStyleFactory::*)($List*,$SynthStyle*)>(&DefaultSynthStyleFactory::cacheStyle))},
	{"getCachedStyle", "(Ljava/util/List;)Ljavax/swing/plaf/synth/SynthStyle;", "(Ljava/util/List<Ljavax/swing/plaf/synth/SynthStyle;>;)Ljavax/swing/plaf/synth/SynthStyle;", $PRIVATE, $method(static_cast<$SynthStyle*(DefaultSynthStyleFactory::*)($List*)>(&DefaultSynthStyleFactory::getCachedStyle))},
	{"getDefaultStyle", "()Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PRIVATE, $method(static_cast<$SynthStyle*(DefaultSynthStyleFactory::*)()>(&DefaultSynthStyleFactory::getDefaultStyle))},
	{"getMatchingStyles", "(Ljava/util/List;Ljavax/swing/JComponent;Ljavax/swing/plaf/synth/Region;)V", "(Ljava/util/List<Ljavax/swing/plaf/synth/SynthStyle;>;Ljavax/swing/JComponent;Ljavax/swing/plaf/synth/Region;)V", $PRIVATE, $method(static_cast<void(DefaultSynthStyleFactory::*)($List*,$JComponent*,$Region*)>(&DefaultSynthStyleFactory::getMatchingStyles))},
	{"getStyle", "(Ljavax/swing/JComponent;Ljavax/swing/plaf/synth/Region;)Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"mergeStyles", "(Ljava/util/List;)Ljavax/swing/plaf/synth/SynthStyle;", "(Ljava/util/List<Ljavax/swing/plaf/synth/SynthStyle;>;)Ljavax/swing/plaf/synth/SynthStyle;", $PRIVATE, $method(static_cast<$SynthStyle*(DefaultSynthStyleFactory::*)($List*)>(&DefaultSynthStyleFactory::mergeStyles))},
	{}
};

$ClassInfo _DefaultSynthStyleFactory_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.synth.DefaultSynthStyleFactory",
	"javax.swing.plaf.synth.SynthStyleFactory",
	nullptr,
	_DefaultSynthStyleFactory_FieldInfo_,
	_DefaultSynthStyleFactory_MethodInfo_
};

$Object* allocate$DefaultSynthStyleFactory($Class* clazz) {
	return $of($alloc(DefaultSynthStyleFactory));
}

void DefaultSynthStyleFactory::init$() {
	$SynthStyleFactory::init$();
	$set(this, _tmpList, $new($BakedArrayList, 5));
	$set(this, _styles, $new($ArrayList));
	$set(this, _resolvedStyles, $new($HashMap));
}

void DefaultSynthStyleFactory::addStyle($DefaultSynthStyle* style, $String* path$renamed, int32_t type) {
	$synchronized(this) {
		$var($String, path, path$renamed);
		if (path == nullptr) {
			$assign(path, ".*"_s);
		}
		if (type == DefaultSynthStyleFactory::NAME) {
			$nc(this->_styles)->add($($StyleAssociation::createStyleAssociation(path, style, type)));
		} else if (type == DefaultSynthStyleFactory::REGION) {
			$nc(this->_styles)->add($($StyleAssociation::createStyleAssociation($($nc(path)->toLowerCase()), style, type)));
		}
	}
}

$SynthStyle* DefaultSynthStyleFactory::getStyle($JComponent* c, $Region* id) {
	$synchronized(this) {
		$var($BakedArrayList, matches, this->_tmpList);
		$nc(matches)->clear();
		getMatchingStyles(matches, c, id);
		if (matches->size() == 0) {
			return getDefaultStyle();
		}
		matches->cacheHashCode();
		$var($SynthStyle, style, getCachedStyle(matches));
		if (style == nullptr) {
			$assign(style, mergeStyles(matches));
			if (style != nullptr) {
				cacheStyle(matches, style);
			}
		}
		return style;
	}
}

$SynthStyle* DefaultSynthStyleFactory::getDefaultStyle() {
	if (this->_defaultStyle == nullptr) {
		$set(this, _defaultStyle, $new($DefaultSynthStyle));
		$init($Font);
		$nc(($cast($DefaultSynthStyle, this->_defaultStyle)))->setFont($$new($FontUIResource, $Font::DIALOG, $Font::PLAIN, 12));
	}
	return this->_defaultStyle;
}

void DefaultSynthStyleFactory::getMatchingStyles($List* matches, $JComponent* c, $Region* id) {
	$var($String, idName, $nc(id)->getLowerCaseName());
	$var($String, cName, $nc(c)->getName());
	if (cName == nullptr) {
		$assign(cName, ""_s);
	}
	for (int32_t counter = $nc(this->_styles)->size() - 1; counter >= 0; --counter) {
		$var($StyleAssociation, sa, $cast($StyleAssociation, $nc(this->_styles)->get(counter)));
		$var($String, path, nullptr);
		if ($nc(sa)->getID() == DefaultSynthStyleFactory::NAME) {
			$assign(path, cName);
		} else {
			$assign(path, idName);
		}
		bool var$0 = $nc(sa)->matches(path);
		if (var$0 && $nc(matches)->indexOf($(sa->getStyle())) == -1) {
			matches->add($(sa->getStyle()));
		}
	}
}

void DefaultSynthStyleFactory::cacheStyle($List* styles, $SynthStyle* style) {
	$var($BakedArrayList, cachedStyles, $new($BakedArrayList, styles));
	$nc(this->_resolvedStyles)->put(cachedStyles, style);
}

$SynthStyle* DefaultSynthStyleFactory::getCachedStyle($List* styles) {
	if ($nc(styles)->size() == 0) {
		return nullptr;
	}
	return $cast($SynthStyle, $nc(this->_resolvedStyles)->get(styles));
}

$SynthStyle* DefaultSynthStyleFactory::mergeStyles($List* styles) {
	int32_t size = $nc(styles)->size();
	if (size == 0) {
		return nullptr;
	} else if (size == 1) {
		return $cast($SynthStyle, $nc(($cast($DefaultSynthStyle, $(styles->get(0)))))->clone());
	}
	$var($DefaultSynthStyle, style, $cast($DefaultSynthStyle, styles->get(size - 1)));
	$assign(style, $cast($DefaultSynthStyle, $nc(style)->clone()));
	for (int32_t counter = size - 2; counter >= 0; --counter) {
		$assign(style, $nc(($cast($DefaultSynthStyle, $(styles->get(counter)))))->addTo(style));
	}
	return style;
}

DefaultSynthStyleFactory::DefaultSynthStyleFactory() {
}

$Class* DefaultSynthStyleFactory::load$($String* name, bool initialize) {
	$loadClass(DefaultSynthStyleFactory, name, initialize, &_DefaultSynthStyleFactory_ClassInfo_, allocate$DefaultSynthStyleFactory);
	return class$;
}

$Class* DefaultSynthStyleFactory::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax