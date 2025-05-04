// Mobile navigation toggle
const hamburger = document.querySelector('.hamburger');
const navLinks = document.querySelector('.nav-links');

hamburger.addEventListener('click', () => {
    navLinks.classList.toggle('active');
});

// Close mobile menu when clicking outside
document.addEventListener('click', (e) => {
    if (!hamburger.contains(e.target) && !navLinks.contains(e.target)) {
        navLinks.classList.remove('active');
    }
});

// Prevent text selection and copying
document.addEventListener('contextmenu', (e) => e.preventDefault());
document.addEventListener('keydown', (e) => {
    if ((e.ctrlKey || e.metaKey) && (e.key === 'c' || e.key === 'C' || e.key === 'u' || e.key === 'U')) {
        e.preventDefault();
    }
});

// Allow text selection in input fields and textarea
const inputs = document.querySelectorAll('input, textarea');
inputs.forEach(input => {
    input.addEventListener('mousedown', (e) => e.stopPropagation());
    input.style.userSelect = 'text';
});

// Sample project data - Replace with your actual projects
const projects = [
    {
        title: 'Competitive Programming Solutions',
        description: 'Collection of efficient solutions to various competitive programming problems from platforms like CodeForces, LeetCode, and CodeChef.',
        tags: ['C++', 'Data Structures', 'Algorithms'],
        github: '#'
    },
    {
        title: 'Portfolio Website',
        description: 'A responsive portfolio website built with HTML, CSS, and JavaScript to showcase my projects and skills.',
        tags: ['HTML', 'CSS', 'JavaScript'],
        github: '#'
    },
    {
        title: 'Project 3',
        description: 'Description of your third project goes here.',
        tags: ['React', 'Node.js', 'MongoDB'],
        github: '#'
    }
];

// Dynamically create project cards
const projectsGrid = document.querySelector('.projects-grid');

function createProjectCards() {
    projectsGrid.innerHTML = projects.map(project => `
        <div class="project-card">
            <h3>${project.title}</h3>
            <p>${project.description}</p>
            <div class="project-tags">
                ${project.tags.map(tag => `<span class="tag">${tag}</span>`).join('')}
            </div>
            <a href="${project.github}" target="_blank" class="btn primary">View Project</a>
        </div>
    `).join('');
}

createProjectCards();

// Smooth scroll for navigation links
document.querySelectorAll('a[href^="#"]').forEach(anchor => {
    anchor.addEventListener('click', function (e) {
        e.preventDefault();
        document.querySelector(this.getAttribute('href')).scrollIntoView({
            behavior: 'smooth'
        });
    });
});

// Form submission handling
const contactForm = document.getElementById('contact-form');

contactForm.addEventListener('submit', (e) => {
    e.preventDefault();
    // Add your form submission logic here
    // For example, sending the data to a server or email service
    alert('Thank you for your message! I will get back to you soon.');
    contactForm.reset();
});