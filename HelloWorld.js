

console.log("Hello World");

a=1;
b=2;
console.log(a+b);
ret = doFetch()
console.log(ret)


function doFetch()
{
    bodyData = " <taxii_11:Poll_Request "+
        "xmlns:taxii_11=\"http://taxii.mitre.org/messages/taxii_xml_binding-1.1\" " + 
        "message_id=\"123456\" "+
        "collection_name=\"guest.Abuse_ch\"> "+
        "<taxii_11:Exclusive_Begin_Timestamp>2017-05-24T15:00:00Z " + 
        "</taxii_11:Exclusive_Begin_Timestamp> "
        "<taxii_11:Inclusive_End_Timestamp>2018-05-25T15:18:00Z "+
        "</taxii_11:Inclusive_End_Timestamp> "+
        "<taxii_11:Poll_Parameters allow_async=\"false\"> "+
        "<taxii_11:Response_Type>FULL</taxii_11:Response_Type> " +
        "</taxii_11:Poll_Parameters> " +
        "</taxii_11:Poll_Request> "

    console.log(bodyData)

    return fetch(
    URL, { method: 'POST',
       headers: new Headers(
       {'Accept': '*/*',
        'Accept-Language': 'en-GB',
        'Accept-Encoding': 'gzip, deflate',
        'Connection': 'Keep-alive',
        'X-TAXII-Services': 'urn:taxii.mitre.org:services:1.1',
        'X-TAXII-Protocol':'urn:taxii.mitre.org:protocol:http:1.0',
        'X-TAXII-Content-Type':'urn:taxii.mitre.org:message:xml:1.1',
        'Content-Type' : 'application/xml'               
        }),
        body: bodyData
       });
}