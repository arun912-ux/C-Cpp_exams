

from time import sleep

from pkg_resources import resource_isdir


class Associate:

    assid=0
    assgrade = ""
    skill = ""
    def __init__(self, assid, assgrade, skill):
        self.assid = assid
        self.assgrade = assgrade
        self.skill = skill
        pass


class Project:

    # list of associate objects
    resorceDetails = []
    # skill : count - dict
    skillreq = {}

    def __init__(self, rd, sr):
        self.resorceDetails = rd
        self.skillreq = sr

    def secondMethod(self, assobj, skil):
        for ass in self.resorceDetails:
            if (ass.assid == assobj.id):
                return

        if (assobj.skill == skil):
            self.resorceDetails.append(assobj)
        pass



