<ul class="pagination justify-content-center" style="margin:20px 0">	
	<c:if test="${pagination.previousPageGroup}">
	<li class="page-item"><a class="page-link" href="FindPostList.do?pageNo=${pagination.startPageOfPageGroup-1}">Previous</a></li>
	</c:if>
	<c:forEach begin="${pagination.startPageOfPageGroup}" 
	end="${pagination.endPageOfPageGroup}" var="page">
	<c:choose>
		<c:when test="${pagination.nowPage==page}">
		<li class="page-item active"><a class="page-link" href="FindPostList.do?pageNo=${page}">${page}</a></li>
		</c:when>
		<c:otherwise>
		<li class="page-item"><a class="page-link" href="FindPostList.do?pageNo=${page}">${page}</a></li>	
		</c:otherwise>
	</c:choose>	
	</c:forEach>		
	<c:if test="${pagination.nextPageGroup}">
  	<li class="page-item"><a class="page-link" href="FindPostList.do?pageNo=${pagination.endPageOfPageGroup+1}">Next</a></li>   
  	</c:if>  
</ul>