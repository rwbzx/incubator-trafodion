#include "TestLdap.h"


CTestLdap::CTestLdap(const char * chDsn, const char * chUID, const char * chPwd)
	:CTestBase(chDsn, chUID, chPwd)
{
}


CTestLdap::~CTestLdap()
{
}

bool CTestLdap::Prepare()
{
	return true;
}

bool CTestLdap::TestGo()
{
	return true;
}

void CTestLdap::CleanUp()
{

}
