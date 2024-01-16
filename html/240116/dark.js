document.getElementById('darkButton').addEventListener('click', function() {
    console.log('Dark button clicked!');
    // Dark overlay를 표시
    document.getElementById('darkOverlay').style.display = 'block';
});

document.getElementById('darkOverlay').addEventListener('click', function() {
    console.log('Dark overlay clicked!');
    // Dark overlay를 숨김
    document.getElementById('darkOverlay').style.display = 'none';
});