#include <iostream>
#include <cstdio>
 
using namespace std;

#define decode(s, t, u, m, p, e, d) m##s##u##t
#define dominus decode(a, n, i, m, a, t, e) // main
 
// logic
 
#define si if
#define aliud else
#define dum while
#define comitium asm
 
// types
 
#define supernatet float
#define duplici double
#define filum string
#define longus long
#define breve short
#define signati signed
#define nonsignatum unsigned
#define numerus int
#define littera char

// keywords
 
#define classis class
#define inanis void
#define colorut alignas
#define colorof alignof
#define et and
#define et_aeq and_eq
#define nuclei_cancel atomic_cancel
#define nuclei_committere atomic_commit
#define nuclei_non_nisi atomic_noexcept
#define frenumand bitand
#define frenumor bitor
#define confractus break
#define casus case
#define capiens catch
#define conceptum concept
#define assidue const
#define constant_coaevus consteval
#define assidue_expressio constexpr
#define assidue_init constinit
#define assidue_cast const_cast
#define co_expecto co_await
#define co_reditus co_return
#define co_cede co_yield
#define declarationem_generis decltype
#define defaltam default
#define delere delete
#define explicite explicit
 
#define verum true
#define falsus false
 
#define amica friend
#define ire goto
#define inacie inline
#define mutabilis mutable
#define spatio_nominali namespace
#define novus new
#define nonnisi noexcept
#define non not
#define non_est_aeq not_eq
#define nullumindicatorum nullptr
#define vel or
#define vel_aequalis or_eq
#define privatus private
#define tutus protected
#define publicus public
#define mandare register
#define requirit requires
#define reditus return
#define magnitudinem sizeof
#define stabilis_assertor static_assert
#define stabilis_cast static_cast
#define hoc this
#define iactus throw
#define experiri try
#define genusdef typedef
#define genesis typeid
#define unio union
#define per using
#define volatilis volatile
#define finis_linea endl
 
namespace vexillum
{
    inanis dicunt(auto x)
    {
        cout << x << endl;
    }
inacie numerus ut_numerus()
    {
        numerus t = 0;
        littera c = getchar();
        bool neg = falsus;
        si(c == '-')
            neg = verum;
        aliud
            t += c - '0';
        dum((c = getchar()) != '\n' && c != ' ' && c != EOF)
        {
            t = t * 10 + c - '0';
        }
        reditus(neg ? -t : t);
    }
    inacie filum ut_filum()
    {
        filum s;
        cin >> s;
        reditus s;
    }
}